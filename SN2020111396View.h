﻿
// SN2020111396View.h: CSN2020111396View 클래스의 인터페이스
//

#pragma once


class CSN2020111396View : public CScrollView
{
protected: // serialization에서만 만들어집니다.
	CSN2020111396View() noexcept;
	DECLARE_DYNCREATE(CSN2020111396View)

// 특성입니다.
public:
	CSN2020111396Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CSN2020111396View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnReverseImg();
};

#ifndef _DEBUG  // SN2020111396View.cpp의 디버그 버전
inline CSN2020111396Doc* CSN2020111396View::GetDocument() const
   { return reinterpret_cast<CSN2020111396Doc*>(m_pDocument); }
#endif

