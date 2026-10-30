import tkinter as tk
import math

RED = "#c1272d"
LW = 3
H = math.sqrt(3) / 2
ROWS = 7
S = 80                  # 1 unit = 80 pixels (aadhi 90 hota)
W, HT = 700, 850
CX, Y0 = W // 2, 330    # y=0 chi position

root = tk.Tk()
root.title("Shri Pattern")
cv = tk.Canvas(root, width=W, height=HT, bg="white", highlightthickness=0)
cv.pack()

def P(x, y):
    """unit coordinates -> screen coordinates (y ulta karun)"""
    return CX + x * S, Y0 - y * S

def line(pts, smooth=False):
    flat = []
    for x, y in pts:
        flat += P(x, y)
    cv.create_line(*flat, fill=RED, width=LW, capstyle="round",
                   joinstyle="round", smooth=smooth, splinesteps=24)

# ---------- triangles ----------
for k in range(ROWS):
    n = ROWS - k
    a = -n / 2
    y = -k * H
    line([(a, y), (a + n, y)])
    for i in range(n):
        xl = a + i
        line([(xl, y), (xl + 0.5, y + H), (xl + 1, y)])

# ---------- upar che curls ----------
hook = [(0, 0), (-0.18, 0.40), (-0.33, 0.90), (-0.25, 1.25), (0.0, 1.45), (0.14, 1.47)]
spiral = [(0, 0), (0.12, 0.35), (0.30, 0.62), (0.30, 0.90), (0.12, 1.00),
          (-0.02, 0.88), (0.05, 0.74), (0.16, 0.80), (0.14, 0.86)]
for i in range(ROWS):
    ox = -ROWS / 2 + i + 0.5
    for curve in (hook, spiral):
        line([(x + ox, y + H) for x, y in curve], smooth=True)

# ---------- || श्री || ----------
tx, ty = P(0, H + 2.2)
cv.create_text(tx, ty, text="|| श्री ||", fill=RED,
               font=("Nirmala UI", 40))

root.mainloop()