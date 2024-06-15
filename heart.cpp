#include <graphics.h>
#include <conio.h>

void drawHeart(int x, int y, int size) {
    int left = x - size;
    int right = x + size;
    int top = y - size;
    int bottom = y + size;

    // Vẽ hai nửa hình trái tim
    arc(x - size / 2, y, 0, 180, size);
    arc(x + size / 2, y, 0, 180, size);

    // Vẽ phần dưới của trái tim
    line(left, y, x, bottom);
    line(right, y, x, bottom);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Thiết lập màu nền là đen
    setbkcolor(BLACK);
    cleardevice();

    // Thiết lập màu vẽ là đỏ
    setcolor(RED);

    // Vẽ trái tim
    drawHeart(getmaxx() / 2, getmaxy() / 2, 50);

    // Hiển thị chữ "I love you" dưới trái tim
    setcolor(WHITE);
    outtextxy(getmaxx() / 2 - 50, getmaxy() / 2 + 60, "I love you");

    // Đợi người dùng nhấn phím để đóng cửa sổ
    getch();
    closegraph();
    return 0;
}
