import json
import re
import shutil
from pathlib import Path

ROOT = Path(".")
SOURCE = ROOT / "Source-Programs"
DEST = ROOT / "03-Logic-Building" / "Practice"
STATE = ROOT / ".github" / "uploaded_programs.json"

SUPPORTED = {".c", ".cpp", ".cc", ".cxx", ".java", ".js", ".py", ".sql"}


def natural_key(path):
    return [
        int(part) if part.isdigit() else part.lower()
        for part in re.split(r"(\d+)", path.as_posix())
    ]


def main():
    if not SOURCE.exists():
        raise FileNotFoundError(f"Source folder not found: {SOURCE}")

    DEST.mkdir(parents=True, exist_ok=True)
    STATE.parent.mkdir(parents=True, exist_ok=True)

    if STATE.exists():
        uploaded = set(json.loads(STATE.read_text(encoding="utf-8")))
    else:
        uploaded = {"program1.c", "program2.cpp"}

    sources = sorted(
        (
            p for p in SOURCE.rglob("*")
            if p.is_file() and p.suffix.lower() in SUPPORTED
        ),
        key=natural_key,
    )

    available = [
        p for p in sources
        if p.relative_to(SOURCE).as_posix() not in uploaded
    ]

    existing_numbers = [
        int(m.group(1))
        for p in DEST.glob("program*.*")
        if (m := re.fullmatch(r"program(\d+)\.[^.]+", p.name))
    ]
    next_number = max(existing_numbers, default=0) + 1

    for source in available[:2]:
        target = DEST / f"program{next_number}{source.suffix.lower()}"

        while target.exists():
            next_number += 1
            target = DEST / f"program{next_number}{source.suffix.lower()}"

        shutil.copy2(source, target)
        uploaded.add(source.relative_to(SOURCE).as_posix())
        print(f"Copied {source} -> {target}")
        next_number += 1

    STATE.write_text(
        json.dumps(sorted(uploaded), indent=2) + "\n",
        encoding="utf-8",
    )

    print("Automation run completed.")


if __name__ == "__main__":
    main()
