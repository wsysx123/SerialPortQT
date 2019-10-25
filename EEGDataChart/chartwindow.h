#pragma once

#include <QMainWindow>
#include "ui_chartwindow.h"
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts>

typedef QPair<QPointF, QString> Data;
typedef QList<Data> DataList;
typedef QList<DataList> DataTable;

class ChartWindow : public QMainWindow
{
	Q_OBJECT

public:
	ChartWindow(QWidget *parent = Q_NULLPTR);
	~ChartWindow();

private:
	Ui::ChartWindow ui;
	QChartView* createLineChart();
	QLineSeries * m_series;
	DataTable m_dataTable;
};
