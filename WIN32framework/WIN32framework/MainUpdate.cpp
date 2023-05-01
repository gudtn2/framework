#include "MainUpdate.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}

void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	rcPoint.left = 100;
	rcPoint.right = 100;
	rcPoint.top = 200;
	rcPoint.bottom = 200;
}

void MainUpdate::Update()
{
	if (GetAsyncKeyState(VK_UP))
	{

	}

	if (GetAsyncKeyState(VK_DOWN))
	{

	}

	if (GetAsyncKeyState(VK_LEFT))
	{

	}

	if (GetAsyncKeyState(VK_RIGHT))
	{

	}
}

void MainUpdate::Render()
{
	Rectangle(m_hdc, 0, 0, 1280, 720);

	Rectangle(m_hdc, rcPoint.left, rcPoint.top, rcPoint.right, rcPoint.bottom);
}

void MainUpdate::Destroy()
{
}

