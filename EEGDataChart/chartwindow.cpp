#include "chartwindow.h"

#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts>

ChartWindow::ChartWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.RawData->addWidget(createLineChart());
	ui.Data->addWidget(createLineChart());
	ui.Data1->addWidget(createLineChart());
}

QChartView* ChartWindow::createLineChart()
{
	QChart* mchart = new QChart();
	QChartView* chart = new QChartView(mchart);
	chart->setRubberBand(QChartView::RectangleRubberBand);
	chart->resize(600,100);
	m_series = new QLineSeries();
	mchart->addSeries(m_series);
	for (int i = 0; i < 10; i++) {
		m_series->append(i, i/10.0);
	}
	m_series->setUseOpenGL(true);//¿ªÆôOpenGL¼ÓËÙ
	QValueAxis* X = new QValueAxis();
	X->setRange(0, 1);
	X->setLabelFormat("%d");
	X->setTitleText("xxx");

	QValueAxis* Y = new QValueAxis();
	Y->setRange(0, 10);
	Y->setLabelFormat("%f");
	Y->setTitleText("yyy");

	mchart->setAxisX(X);
	mchart->setAxisY(Y);
	mchart->setTitle("demo");

	return chart;
}

ChartWindow::~ChartWindow()
{
}
