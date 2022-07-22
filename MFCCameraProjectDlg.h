
// MFCCameraProjectDlg.h: 헤더 파일
//

#pragma once
#include "opencv2/opencv.hpp"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;

// CMFCCameraProjectDlg 대화 상자
class CMFCCameraProjectDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCCameraProjectDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCAMERAPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_picture;
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);

	// kdh 추가
public:
	VideoCapture* capture;
	Mat mat_frame;
	CImage cimage_mfc;
	afx_msg void OnBnClickedButton6();
	CButton m_OnOffButton;
	int flag = 0;

	float w = 250, h = 350;
	Mat matrix, imgWrap;
};
