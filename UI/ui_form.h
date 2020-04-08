/********************************************************************************
** Form generated from reading UI file 'press_altM26747.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PRESS_ALTM26747_H
#define PRESS_ALTM26747_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_10;
    QGroupBox *euler_box;
    QGridLayout *gridLayout_6;
    QLabel *euler_x_panel;
    QLabel *euler_y_panel;
    QLabel *euler_x_label;
    QLabel *euler_y_label;
    QLabel *euler_z_label;
    QLabel *euler_z_panel;
    QGroupBox *gps_box;
    QGridLayout *gridLayout_3;
    QLabel *longitude_label;
    QLabel *latitude_label;
    QLabel *altitude_label_gps;
    QLabel *sat_nbr_label;
    QLabel *hdop_label;
    QLabel *altitude_max_label;
    QLabel *longitude_panel;
    QLabel *ft_unit_label_2;
    QLCDNumber *altitude_max_lcd_m;
    QLCDNumber *altitude_lcd_gps_ft;
    QLCDNumber *altitude_lcd_gps;
    QLabel *m_unit_label_2;
    QLabel *m_unit_label;
    QLCDNumber *altitude_max_lcd_ft;
    QLabel *ft_unit_label;
    QLabel *latitude_panel;
    QLabel *hdop_panel;
    QLabel *sat_nbr_panel;
    QGroupBox *avionics_box;
    QGridLayout *gridLayout_8;
    QLabel *altitude_label_telemetry;
    QLabel *speed_label;
    QLabel *temperature_label;
    QLabel *temperature_panel;
    QLabel *pressure_panel;
    QLabel *speed_panel;
    QLabel *altitude_panel_telemetry;
    QLabel *hpa_unit_label;
    QLabel *celcius_label;
    QLabel *m_s_unit_label;
    QLabel *avionics_state_label;
    QLabel *pressure_label;
    QLabel *m_unit_label_3;
    QLabel *avionics_state_panel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *tank_temp_panel;
    QLabel *celcius_label2;
    QLabel *tank_temp_label;
    QLabel *hose_pressure_label;
    QLabel *hpa_panel;
    QLabel *hose_pressure_panel;
    QLabel *hoes_temp_label;
    QLabel *celcius_label_2;
    QLabel *rocket_weight_label;
    QLabel *hose_temp_panel;
    QLabel *rocket_weight_panel;
    QLabel *kg_label;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_9;
    QLabel *receiver_state_label;
    QLabel *transmitter_state_label;
    QLabel *transmitter_state_panel;
    QPushButton *file_transmission_button;
    QLabel *receiver_state_panel;
    QProgressBar *file_transmission_progress_bar;
    QGroupBox *ignition_box;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *code_3;
    QLabel *code_2;
    QLabel *code_1;
    QLabel *code_0;
    QLabel *ready_ignition_panel;
    QLabel *key_2_label;
    QLabel *key_1_label;
    QPushButton *ignition_button;
    QLabel *key_2_panel;
    QLabel *key_1_panel;
    QLabel *red_button_label;
    QLabel *red_button_panel;
    QLabel *ignition_status_label;
    QLabel *logo;
    QWidget *upper_widget;
    QGridLayout *gridLayout_5;
    QLabel *time_panel;
    QPushButton *xbee_button;
    QPushButton *change_theme;
    QPushButton *reset_button;
    QLabel *current_time_label;
    QGroupBox *accel_box;
    QGridLayout *gridLayout_7;
    QLabel *accel_x_label;
    QLabel *accel_z_label;
    QLabel *accel_y_label;
    QLabel *accel_x_panel;
    QLabel *accel_y_panel;
    QLabel *accel_z_panel;
    QLabel *norm_label;
    QLabel *norm_panel;
    QGroupBox *av_states_box;
    QGridLayout *gridLayout_11;
    QLabel *second_event_ok_panel;
    QLabel *first_event_ok_panel;
    QLabel *idle_state_ok_panel;
    QLabel *coast_state_ok_panel;
    QLabel *first_event_label;
    QLabel *second_event_label;
    QLabel *sleep_state_ok_panel;
    QLabel *sleep_label;
    QLabel *filling_label;
    QLabel *filling_state_ok_panel;
    QLabel *idle_label;
    QLabel *liftoff_label;
    QLabel *liftoff_state_ok_panel;
    QLabel *coast_label;
    QGroupBox *com_box;
    QGridLayout *gridLayout_4;
    QLabel *last_refresh_label;
    QLabel *last_packet_nbr_label;
    QLabel *packets_second_label;
    QProgressBar *packets_second_bar;
    QLabel *last_packet_number_panel;
    QLabel *received_pack_cnt_label;
    QLabel *last_refresh_panel;
    QLabel *received_pack_cnt_panel;
    QLabel *miss_label;
    QLabel *miss_panel;
    QLabel *corrupted_label;
    QLabel *corrupted_panel;
    QLabel *last_datagram_id;
    QLabel *last_datagram_id_panel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(851, 635);
        Form->setMinimumSize(QSize(745, 635));
        Form->setMaximumSize(QSize(9999, 9999));
        Form->setMouseTracking(false);
        Form->setStyleSheet(QLatin1String("background-color: rgb(30, 30, 30);\n"
"color: rgb(255, 255, 255);"));
        gridLayout_10 = new QGridLayout(Form);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        euler_box = new QGroupBox(Form);
        euler_box->setObjectName(QStringLiteral("euler_box"));
        gridLayout_6 = new QGridLayout(euler_box);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        euler_x_panel = new QLabel(euler_box);
        euler_x_panel->setObjectName(QStringLiteral("euler_x_panel"));

        gridLayout_6->addWidget(euler_x_panel, 0, 1, 1, 1);

        euler_y_panel = new QLabel(euler_box);
        euler_y_panel->setObjectName(QStringLiteral("euler_y_panel"));

        gridLayout_6->addWidget(euler_y_panel, 1, 1, 1, 1);

        euler_x_label = new QLabel(euler_box);
        euler_x_label->setObjectName(QStringLiteral("euler_x_label"));
        euler_x_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_6->addWidget(euler_x_label, 0, 0, 1, 1);

        euler_y_label = new QLabel(euler_box);
        euler_y_label->setObjectName(QStringLiteral("euler_y_label"));
        euler_y_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_6->addWidget(euler_y_label, 1, 0, 1, 1);

        euler_z_label = new QLabel(euler_box);
        euler_z_label->setObjectName(QStringLiteral("euler_z_label"));
        euler_z_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_6->addWidget(euler_z_label, 2, 0, 1, 1);

        euler_z_panel = new QLabel(euler_box);
        euler_z_panel->setObjectName(QStringLiteral("euler_z_panel"));

        gridLayout_6->addWidget(euler_z_panel, 2, 1, 1, 1);


        gridLayout_10->addWidget(euler_box, 4, 3, 2, 1);

        gps_box = new QGroupBox(Form);
        gps_box->setObjectName(QStringLiteral("gps_box"));
        gps_box->setMinimumSize(QSize(0, 200));
        gridLayout_3 = new QGridLayout(gps_box);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        longitude_label = new QLabel(gps_box);
        longitude_label->setObjectName(QStringLiteral("longitude_label"));

        gridLayout_3->addWidget(longitude_label, 3, 0, 1, 1);

        latitude_label = new QLabel(gps_box);
        latitude_label->setObjectName(QStringLiteral("latitude_label"));

        gridLayout_3->addWidget(latitude_label, 5, 0, 1, 1);

        altitude_label_gps = new QLabel(gps_box);
        altitude_label_gps->setObjectName(QStringLiteral("altitude_label_gps"));

        gridLayout_3->addWidget(altitude_label_gps, 1, 0, 1, 1);

        sat_nbr_label = new QLabel(gps_box);
        sat_nbr_label->setObjectName(QStringLiteral("sat_nbr_label"));

        gridLayout_3->addWidget(sat_nbr_label, 7, 0, 1, 1);

        hdop_label = new QLabel(gps_box);
        hdop_label->setObjectName(QStringLiteral("hdop_label"));

        gridLayout_3->addWidget(hdop_label, 6, 0, 1, 1);

        altitude_max_label = new QLabel(gps_box);
        altitude_max_label->setObjectName(QStringLiteral("altitude_max_label"));

        gridLayout_3->addWidget(altitude_max_label, 2, 0, 1, 1);

        longitude_panel = new QLabel(gps_box);
        longitude_panel->setObjectName(QStringLiteral("longitude_panel"));

        gridLayout_3->addWidget(longitude_panel, 3, 1, 1, 4);

        ft_unit_label_2 = new QLabel(gps_box);
        ft_unit_label_2->setObjectName(QStringLiteral("ft_unit_label_2"));
        ft_unit_label_2->setMaximumSize(QSize(20, 16777215));

        gridLayout_3->addWidget(ft_unit_label_2, 1, 4, 1, 1);

        altitude_max_lcd_m = new QLCDNumber(gps_box);
        altitude_max_lcd_m->setObjectName(QStringLiteral("altitude_max_lcd_m"));
        altitude_max_lcd_m->setEnabled(true);
        altitude_max_lcd_m->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(altitude_max_lcd_m, 2, 1, 1, 1);

        altitude_lcd_gps_ft = new QLCDNumber(gps_box);
        altitude_lcd_gps_ft->setObjectName(QStringLiteral("altitude_lcd_gps_ft"));
        altitude_lcd_gps_ft->setFrameShadow(QFrame::Raised);
        altitude_lcd_gps_ft->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(altitude_lcd_gps_ft, 1, 3, 1, 1);

        altitude_lcd_gps = new QLCDNumber(gps_box);
        altitude_lcd_gps->setObjectName(QStringLiteral("altitude_lcd_gps"));
        altitude_lcd_gps->setSmallDecimalPoint(false);
        altitude_lcd_gps->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(altitude_lcd_gps, 1, 1, 1, 1);

        m_unit_label_2 = new QLabel(gps_box);
        m_unit_label_2->setObjectName(QStringLiteral("m_unit_label_2"));
        m_unit_label_2->setMaximumSize(QSize(30, 16777215));

        gridLayout_3->addWidget(m_unit_label_2, 1, 2, 1, 1);

        m_unit_label = new QLabel(gps_box);
        m_unit_label->setObjectName(QStringLiteral("m_unit_label"));

        gridLayout_3->addWidget(m_unit_label, 2, 2, 1, 1);

        altitude_max_lcd_ft = new QLCDNumber(gps_box);
        altitude_max_lcd_ft->setObjectName(QStringLiteral("altitude_max_lcd_ft"));
        altitude_max_lcd_ft->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(altitude_max_lcd_ft, 2, 3, 1, 1);

        ft_unit_label = new QLabel(gps_box);
        ft_unit_label->setObjectName(QStringLiteral("ft_unit_label"));

        gridLayout_3->addWidget(ft_unit_label, 2, 4, 1, 1);

        latitude_panel = new QLabel(gps_box);
        latitude_panel->setObjectName(QStringLiteral("latitude_panel"));
        latitude_panel->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(latitude_panel, 5, 1, 1, 4);

        hdop_panel = new QLabel(gps_box);
        hdop_panel->setObjectName(QStringLiteral("hdop_panel"));

        gridLayout_3->addWidget(hdop_panel, 6, 1, 1, 4);

        sat_nbr_panel = new QLabel(gps_box);
        sat_nbr_panel->setObjectName(QStringLiteral("sat_nbr_panel"));

        gridLayout_3->addWidget(sat_nbr_panel, 7, 1, 1, 4);


        gridLayout_10->addWidget(gps_box, 3, 0, 1, 3);

        avionics_box = new QGroupBox(Form);
        avionics_box->setObjectName(QStringLiteral("avionics_box"));
        gridLayout_8 = new QGridLayout(avionics_box);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        altitude_label_telemetry = new QLabel(avionics_box);
        altitude_label_telemetry->setObjectName(QStringLiteral("altitude_label_telemetry"));

        gridLayout_8->addWidget(altitude_label_telemetry, 3, 0, 1, 1);

        speed_label = new QLabel(avionics_box);
        speed_label->setObjectName(QStringLiteral("speed_label"));

        gridLayout_8->addWidget(speed_label, 2, 0, 1, 1);

        temperature_label = new QLabel(avionics_box);
        temperature_label->setObjectName(QStringLiteral("temperature_label"));

        gridLayout_8->addWidget(temperature_label, 0, 0, 1, 1);

        temperature_panel = new QLabel(avionics_box);
        temperature_panel->setObjectName(QStringLiteral("temperature_panel"));

        gridLayout_8->addWidget(temperature_panel, 0, 1, 1, 1);

        pressure_panel = new QLabel(avionics_box);
        pressure_panel->setObjectName(QStringLiteral("pressure_panel"));

        gridLayout_8->addWidget(pressure_panel, 1, 1, 1, 1);

        speed_panel = new QLabel(avionics_box);
        speed_panel->setObjectName(QStringLiteral("speed_panel"));

        gridLayout_8->addWidget(speed_panel, 2, 1, 1, 1);

        altitude_panel_telemetry = new QLabel(avionics_box);
        altitude_panel_telemetry->setObjectName(QStringLiteral("altitude_panel_telemetry"));

        gridLayout_8->addWidget(altitude_panel_telemetry, 3, 1, 1, 1);

        hpa_unit_label = new QLabel(avionics_box);
        hpa_unit_label->setObjectName(QStringLiteral("hpa_unit_label"));

        gridLayout_8->addWidget(hpa_unit_label, 1, 2, 1, 1);

        celcius_label = new QLabel(avionics_box);
        celcius_label->setObjectName(QStringLiteral("celcius_label"));
        celcius_label->setMinimumSize(QSize(32, 40));

        gridLayout_8->addWidget(celcius_label, 0, 2, 1, 1);

        m_s_unit_label = new QLabel(avionics_box);
        m_s_unit_label->setObjectName(QStringLiteral("m_s_unit_label"));

        gridLayout_8->addWidget(m_s_unit_label, 2, 2, 1, 1);

        avionics_state_label = new QLabel(avionics_box);
        avionics_state_label->setObjectName(QStringLiteral("avionics_state_label"));

        gridLayout_8->addWidget(avionics_state_label, 4, 0, 1, 1);

        pressure_label = new QLabel(avionics_box);
        pressure_label->setObjectName(QStringLiteral("pressure_label"));

        gridLayout_8->addWidget(pressure_label, 1, 0, 1, 1);

        m_unit_label_3 = new QLabel(avionics_box);
        m_unit_label_3->setObjectName(QStringLiteral("m_unit_label_3"));

        gridLayout_8->addWidget(m_unit_label_3, 3, 2, 1, 1);

        avionics_state_panel = new QLabel(avionics_box);
        avionics_state_panel->setObjectName(QStringLiteral("avionics_state_panel"));
        avionics_state_panel->setFrameShape(QFrame::WinPanel);
        avionics_state_panel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(avionics_state_panel, 4, 1, 1, 2);


        gridLayout_10->addWidget(avionics_box, 3, 3, 1, 1);

        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tank_temp_panel = new QLabel(groupBox);
        tank_temp_panel->setObjectName(QStringLiteral("tank_temp_panel"));
        tank_temp_panel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(tank_temp_panel, 0, 1, 1, 1);

        celcius_label2 = new QLabel(groupBox);
        celcius_label2->setObjectName(QStringLiteral("celcius_label2"));
        celcius_label2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(celcius_label2, 0, 2, 1, 1);

        tank_temp_label = new QLabel(groupBox);
        tank_temp_label->setObjectName(QStringLiteral("tank_temp_label"));

        gridLayout->addWidget(tank_temp_label, 0, 0, 1, 1);

        hose_pressure_label = new QLabel(groupBox);
        hose_pressure_label->setObjectName(QStringLiteral("hose_pressure_label"));

        gridLayout->addWidget(hose_pressure_label, 1, 0, 1, 1);

        hpa_panel = new QLabel(groupBox);
        hpa_panel->setObjectName(QStringLiteral("hpa_panel"));
        hpa_panel->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(hpa_panel, 1, 2, 1, 1);

        hose_pressure_panel = new QLabel(groupBox);
        hose_pressure_panel->setObjectName(QStringLiteral("hose_pressure_panel"));
        hose_pressure_panel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(hose_pressure_panel, 1, 1, 1, 1);

        hoes_temp_label = new QLabel(groupBox);
        hoes_temp_label->setObjectName(QStringLiteral("hoes_temp_label"));

        gridLayout->addWidget(hoes_temp_label, 2, 0, 1, 1);

        celcius_label_2 = new QLabel(groupBox);
        celcius_label_2->setObjectName(QStringLiteral("celcius_label_2"));
        celcius_label_2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(celcius_label_2, 2, 2, 1, 1);

        rocket_weight_label = new QLabel(groupBox);
        rocket_weight_label->setObjectName(QStringLiteral("rocket_weight_label"));

        gridLayout->addWidget(rocket_weight_label, 3, 0, 1, 1);

        hose_temp_panel = new QLabel(groupBox);
        hose_temp_panel->setObjectName(QStringLiteral("hose_temp_panel"));
        hose_temp_panel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(hose_temp_panel, 2, 1, 1, 1);

        rocket_weight_panel = new QLabel(groupBox);
        rocket_weight_panel->setObjectName(QStringLiteral("rocket_weight_panel"));
        rocket_weight_panel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rocket_weight_panel, 3, 1, 1, 1);

        kg_label = new QLabel(groupBox);
        kg_label->setObjectName(QStringLiteral("kg_label"));
        kg_label->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(kg_label, 3, 2, 1, 1);


        gridLayout_10->addWidget(groupBox, 4, 1, 2, 2);

        groupBox1 = new QGroupBox(Form);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout_9 = new QGridLayout(groupBox1);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        receiver_state_label = new QLabel(groupBox1);
        receiver_state_label->setObjectName(QStringLiteral("receiver_state_label"));
        receiver_state_label->setMinimumSize(QSize(140, 0));
        receiver_state_label->setMaximumSize(QSize(212411, 16777215));

        gridLayout_9->addWidget(receiver_state_label, 1, 0, 1, 1);

        transmitter_state_label = new QLabel(groupBox1);
        transmitter_state_label->setObjectName(QStringLiteral("transmitter_state_label"));
        transmitter_state_label->setMinimumSize(QSize(140, 0));
        transmitter_state_label->setMaximumSize(QSize(1241251, 16777215));

        gridLayout_9->addWidget(transmitter_state_label, 2, 0, 1, 1);

        transmitter_state_panel = new QLabel(groupBox1);
        transmitter_state_panel->setObjectName(QStringLiteral("transmitter_state_panel"));

        gridLayout_9->addWidget(transmitter_state_panel, 2, 1, 1, 1);

        file_transmission_button = new QPushButton(groupBox1);
        file_transmission_button->setObjectName(QStringLiteral("file_transmission_button"));

        gridLayout_9->addWidget(file_transmission_button, 0, 0, 1, 2);

        receiver_state_panel = new QLabel(groupBox1);
        receiver_state_panel->setObjectName(QStringLiteral("receiver_state_panel"));

        gridLayout_9->addWidget(receiver_state_panel, 1, 1, 1, 1);

        file_transmission_progress_bar = new QProgressBar(groupBox1);
        file_transmission_progress_bar->setObjectName(QStringLiteral("file_transmission_progress_bar"));
        file_transmission_progress_bar->setValue(24);

        gridLayout_9->addWidget(file_transmission_progress_bar, 3, 0, 1, 2);


        gridLayout_10->addWidget(groupBox1, 4, 0, 2, 1);

        ignition_box = new QGroupBox(Form);
        ignition_box->setObjectName(QStringLiteral("ignition_box"));
        gridLayout_2 = new QGridLayout(ignition_box);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(ignition_box);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setMaximumSize(QSize(16777215, 35));
        frame->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"gridline-color: rgb(255, 0, 0);"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        code_3 = new QLabel(frame);
        code_3->setObjectName(QStringLiteral("code_3"));
        code_3->setMinimumSize(QSize(21, 21));
        code_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(code_3);

        code_2 = new QLabel(frame);
        code_2->setObjectName(QStringLiteral("code_2"));
        code_2->setMinimumSize(QSize(21, 21));
        code_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(code_2);

        code_1 = new QLabel(frame);
        code_1->setObjectName(QStringLiteral("code_1"));
        code_1->setMinimumSize(QSize(21, 21));
        code_1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(code_1);

        code_0 = new QLabel(frame);
        code_0->setObjectName(QStringLiteral("code_0"));
        code_0->setMinimumSize(QSize(21, 21));
        code_0->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(code_0);


        gridLayout_2->addWidget(frame, 5, 0, 1, 2);

        ready_ignition_panel = new QLabel(ignition_box);
        ready_ignition_panel->setObjectName(QStringLiteral("ready_ignition_panel"));
        ready_ignition_panel->setMinimumSize(QSize(23, 0));
        ready_ignition_panel->setMaximumSize(QSize(23, 16777215));
        ready_ignition_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(ready_ignition_panel, 0, 1, 1, 1);

        key_2_label = new QLabel(ignition_box);
        key_2_label->setObjectName(QStringLiteral("key_2_label"));

        gridLayout_2->addWidget(key_2_label, 2, 0, 1, 1);

        key_1_label = new QLabel(ignition_box);
        key_1_label->setObjectName(QStringLiteral("key_1_label"));

        gridLayout_2->addWidget(key_1_label, 1, 0, 1, 1);

        ignition_button = new QPushButton(ignition_box);
        ignition_button->setObjectName(QStringLiteral("ignition_button"));
        ignition_button->setMinimumSize(QSize(132, 0));
        ignition_button->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(ignition_button, 0, 0, 1, 1);

        key_2_panel = new QLabel(ignition_box);
        key_2_panel->setObjectName(QStringLiteral("key_2_panel"));
        key_2_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(key_2_panel, 2, 1, 1, 1);

        key_1_panel = new QLabel(ignition_box);
        key_1_panel->setObjectName(QStringLiteral("key_1_panel"));
        key_1_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(key_1_panel, 1, 1, 1, 1);

        red_button_label = new QLabel(ignition_box);
        red_button_label->setObjectName(QStringLiteral("red_button_label"));

        gridLayout_2->addWidget(red_button_label, 3, 0, 1, 1);

        red_button_panel = new QLabel(ignition_box);
        red_button_panel->setObjectName(QStringLiteral("red_button_panel"));
        red_button_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(red_button_panel, 3, 1, 1, 1);

        ignition_status_label = new QLabel(ignition_box);
        ignition_status_label->setObjectName(QStringLiteral("ignition_status_label"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        ignition_status_label->setFont(font);
        ignition_status_label->setAutoFillBackground(false);
        ignition_status_label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(ignition_status_label, 4, 0, 1, 2);


        gridLayout_10->addWidget(ignition_box, 1, 0, 1, 1);

        logo = new QLabel(Form);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setStyleSheet(QLatin1String("\n"
"\n"
"image: url(:/assets/logo.png);"));

        gridLayout_10->addWidget(logo, 4, 4, 2, 1);

        upper_widget = new QWidget(Form);
        upper_widget->setObjectName(QStringLiteral("upper_widget"));
        gridLayout_5 = new QGridLayout(upper_widget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        time_panel = new QLabel(upper_widget);
        time_panel->setObjectName(QStringLiteral("time_panel"));
        time_panel->setMinimumSize(QSize(70, 0));
        time_panel->setMaximumSize(QSize(60, 16777215));
        time_panel->setStyleSheet(QStringLiteral(""));
        time_panel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(time_panel, 0, 5, 1, 1);

        xbee_button = new QPushButton(upper_widget);
        xbee_button->setObjectName(QStringLiteral("xbee_button"));
        xbee_button->setMinimumSize(QSize(100, 0));

        gridLayout_5->addWidget(xbee_button, 0, 1, 1, 1);

        change_theme = new QPushButton(upper_widget);
        change_theme->setObjectName(QStringLiteral("change_theme"));

        gridLayout_5->addWidget(change_theme, 0, 2, 1, 1);

        reset_button = new QPushButton(upper_widget);
        reset_button->setObjectName(QStringLiteral("reset_button"));

        gridLayout_5->addWidget(reset_button, 0, 0, 1, 1);

        current_time_label = new QLabel(upper_widget);
        current_time_label->setObjectName(QStringLiteral("current_time_label"));
        current_time_label->setMaximumSize(QSize(100, 16777215));
        current_time_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(current_time_label, 0, 4, 1, 1);


        gridLayout_10->addWidget(upper_widget, 0, 0, 1, 5);

        accel_box = new QGroupBox(Form);
        accel_box->setObjectName(QStringLiteral("accel_box"));
        gridLayout_7 = new QGridLayout(accel_box);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        accel_x_label = new QLabel(accel_box);
        accel_x_label->setObjectName(QStringLiteral("accel_x_label"));
        accel_x_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_7->addWidget(accel_x_label, 0, 0, 1, 1);

        accel_z_label = new QLabel(accel_box);
        accel_z_label->setObjectName(QStringLiteral("accel_z_label"));
        accel_z_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_7->addWidget(accel_z_label, 2, 0, 1, 1);

        accel_y_label = new QLabel(accel_box);
        accel_y_label->setObjectName(QStringLiteral("accel_y_label"));
        accel_y_label->setMaximumSize(QSize(25, 16777215));

        gridLayout_7->addWidget(accel_y_label, 1, 0, 1, 1);

        accel_x_panel = new QLabel(accel_box);
        accel_x_panel->setObjectName(QStringLiteral("accel_x_panel"));
        accel_x_panel->setFrameShape(QFrame::NoFrame);

        gridLayout_7->addWidget(accel_x_panel, 0, 1, 1, 1);

        accel_y_panel = new QLabel(accel_box);
        accel_y_panel->setObjectName(QStringLiteral("accel_y_panel"));
        accel_y_panel->setFrameShape(QFrame::NoFrame);

        gridLayout_7->addWidget(accel_y_panel, 1, 1, 1, 1);

        accel_z_panel = new QLabel(accel_box);
        accel_z_panel->setObjectName(QStringLiteral("accel_z_panel"));
        accel_z_panel->setFrameShape(QFrame::NoFrame);

        gridLayout_7->addWidget(accel_z_panel, 2, 1, 1, 1);

        norm_label = new QLabel(accel_box);
        norm_label->setObjectName(QStringLiteral("norm_label"));

        gridLayout_7->addWidget(norm_label, 3, 0, 1, 1);

        norm_panel = new QLabel(accel_box);
        norm_panel->setObjectName(QStringLiteral("norm_panel"));

        gridLayout_7->addWidget(norm_panel, 3, 1, 1, 1);


        gridLayout_10->addWidget(accel_box, 3, 4, 1, 1);

        av_states_box = new QGroupBox(Form);
        av_states_box->setObjectName(QStringLiteral("av_states_box"));
        gridLayout_11 = new QGridLayout(av_states_box);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        second_event_ok_panel = new QLabel(av_states_box);
        second_event_ok_panel->setObjectName(QStringLiteral("second_event_ok_panel"));
        second_event_ok_panel->setMinimumSize(QSize(23, 0));
        second_event_ok_panel->setMaximumSize(QSize(23, 16777215));
        second_event_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(second_event_ok_panel, 13, 1, 1, 1);

        first_event_ok_panel = new QLabel(av_states_box);
        first_event_ok_panel->setObjectName(QStringLiteral("first_event_ok_panel"));
        first_event_ok_panel->setMinimumSize(QSize(23, 0));
        first_event_ok_panel->setMaximumSize(QSize(23, 16777215));
        first_event_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(first_event_ok_panel, 12, 1, 1, 1);

        idle_state_ok_panel = new QLabel(av_states_box);
        idle_state_ok_panel->setObjectName(QStringLiteral("idle_state_ok_panel"));
        idle_state_ok_panel->setMinimumSize(QSize(23, 0));
        idle_state_ok_panel->setMaximumSize(QSize(23, 16777215));
        idle_state_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(idle_state_ok_panel, 4, 1, 1, 1);

        coast_state_ok_panel = new QLabel(av_states_box);
        coast_state_ok_panel->setObjectName(QStringLiteral("coast_state_ok_panel"));
        coast_state_ok_panel->setMinimumSize(QSize(23, 0));
        coast_state_ok_panel->setMaximumSize(QSize(23, 16777215));
        coast_state_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(coast_state_ok_panel, 8, 1, 1, 1);

        first_event_label = new QLabel(av_states_box);
        first_event_label->setObjectName(QStringLiteral("first_event_label"));

        gridLayout_11->addWidget(first_event_label, 12, 0, 1, 1);

        second_event_label = new QLabel(av_states_box);
        second_event_label->setObjectName(QStringLiteral("second_event_label"));

        gridLayout_11->addWidget(second_event_label, 13, 0, 1, 1);

        sleep_state_ok_panel = new QLabel(av_states_box);
        sleep_state_ok_panel->setObjectName(QStringLiteral("sleep_state_ok_panel"));
        sleep_state_ok_panel->setMinimumSize(QSize(23, 0));
        sleep_state_ok_panel->setMaximumSize(QSize(23, 16777215));
        sleep_state_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(sleep_state_ok_panel, 3, 1, 1, 1);

        sleep_label = new QLabel(av_states_box);
        sleep_label->setObjectName(QStringLiteral("sleep_label"));

        gridLayout_11->addWidget(sleep_label, 3, 0, 1, 1);

        filling_label = new QLabel(av_states_box);
        filling_label->setObjectName(QStringLiteral("filling_label"));

        gridLayout_11->addWidget(filling_label, 5, 0, 1, 1);

        filling_state_ok_panel = new QLabel(av_states_box);
        filling_state_ok_panel->setObjectName(QStringLiteral("filling_state_ok_panel"));
        filling_state_ok_panel->setMinimumSize(QSize(23, 0));
        filling_state_ok_panel->setMaximumSize(QSize(23, 16777215));
        filling_state_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(filling_state_ok_panel, 5, 1, 1, 1);

        idle_label = new QLabel(av_states_box);
        idle_label->setObjectName(QStringLiteral("idle_label"));
        idle_label->setStyleSheet(QStringLiteral(""));

        gridLayout_11->addWidget(idle_label, 4, 0, 1, 1);

        liftoff_label = new QLabel(av_states_box);
        liftoff_label->setObjectName(QStringLiteral("liftoff_label"));

        gridLayout_11->addWidget(liftoff_label, 6, 0, 1, 1);

        liftoff_state_ok_panel = new QLabel(av_states_box);
        liftoff_state_ok_panel->setObjectName(QStringLiteral("liftoff_state_ok_panel"));
        liftoff_state_ok_panel->setMinimumSize(QSize(23, 0));
        liftoff_state_ok_panel->setMaximumSize(QSize(23, 16777215));
        liftoff_state_ok_panel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout_11->addWidget(liftoff_state_ok_panel, 6, 1, 1, 1);

        coast_label = new QLabel(av_states_box);
        coast_label->setObjectName(QStringLiteral("coast_label"));

        gridLayout_11->addWidget(coast_label, 8, 0, 1, 1);


        gridLayout_10->addWidget(av_states_box, 1, 4, 1, 1);

        com_box = new QGroupBox(Form);
        com_box->setObjectName(QStringLiteral("com_box"));
        gridLayout_4 = new QGridLayout(com_box);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        last_refresh_label = new QLabel(com_box);
        last_refresh_label->setObjectName(QStringLiteral("last_refresh_label"));

        gridLayout_4->addWidget(last_refresh_label, 7, 0, 1, 1);

        last_packet_nbr_label = new QLabel(com_box);
        last_packet_nbr_label->setObjectName(QStringLiteral("last_packet_nbr_label"));

        gridLayout_4->addWidget(last_packet_nbr_label, 2, 0, 1, 1);

        packets_second_label = new QLabel(com_box);
        packets_second_label->setObjectName(QStringLiteral("packets_second_label"));

        gridLayout_4->addWidget(packets_second_label, 4, 0, 1, 1);

        packets_second_bar = new QProgressBar(com_box);
        packets_second_bar->setObjectName(QStringLiteral("packets_second_bar"));
        packets_second_bar->setStyleSheet(QStringLiteral(""));
        packets_second_bar->setMaximum(40);
        packets_second_bar->setValue(30);
        packets_second_bar->setInvertedAppearance(false);

        gridLayout_4->addWidget(packets_second_bar, 4, 1, 1, 1);

        last_packet_number_panel = new QLabel(com_box);
        last_packet_number_panel->setObjectName(QStringLiteral("last_packet_number_panel"));

        gridLayout_4->addWidget(last_packet_number_panel, 2, 1, 1, 1);

        received_pack_cnt_label = new QLabel(com_box);
        received_pack_cnt_label->setObjectName(QStringLiteral("received_pack_cnt_label"));

        gridLayout_4->addWidget(received_pack_cnt_label, 1, 0, 1, 1);

        last_refresh_panel = new QLabel(com_box);
        last_refresh_panel->setObjectName(QStringLiteral("last_refresh_panel"));

        gridLayout_4->addWidget(last_refresh_panel, 7, 1, 1, 1);

        received_pack_cnt_panel = new QLabel(com_box);
        received_pack_cnt_panel->setObjectName(QStringLiteral("received_pack_cnt_panel"));

        gridLayout_4->addWidget(received_pack_cnt_panel, 1, 1, 1, 1);

        miss_label = new QLabel(com_box);
        miss_label->setObjectName(QStringLiteral("miss_label"));

        gridLayout_4->addWidget(miss_label, 6, 0, 1, 1);

        miss_panel = new QLabel(com_box);
        miss_panel->setObjectName(QStringLiteral("miss_panel"));

        gridLayout_4->addWidget(miss_panel, 6, 1, 1, 1);

        corrupted_label = new QLabel(com_box);
        corrupted_label->setObjectName(QStringLiteral("corrupted_label"));

        gridLayout_4->addWidget(corrupted_label, 8, 0, 1, 1);

        corrupted_panel = new QLabel(com_box);
        corrupted_panel->setObjectName(QStringLiteral("corrupted_panel"));

        gridLayout_4->addWidget(corrupted_panel, 8, 1, 1, 1);

        last_datagram_id = new QLabel(com_box);
        last_datagram_id->setObjectName(QStringLiteral("last_datagram_id"));

        gridLayout_4->addWidget(last_datagram_id, 3, 0, 1, 1);

        last_datagram_id_panel = new QLabel(com_box);
        last_datagram_id_panel->setObjectName(QStringLiteral("last_datagram_id_panel"));

        gridLayout_4->addWidget(last_datagram_id_panel, 3, 1, 1, 1);


        gridLayout_10->addWidget(com_box, 1, 1, 1, 3);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "GSBellaLui2020", Q_NULLPTR));
        euler_box->setTitle(QApplication::translate("Form", "Euler angles", Q_NULLPTR));
        euler_x_panel->setText(QString());
        euler_y_panel->setText(QString());
        euler_x_label->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        euler_y_label->setText(QApplication::translate("Form", "Y", Q_NULLPTR));
        euler_z_label->setText(QApplication::translate("Form", "Z", Q_NULLPTR));
        euler_z_panel->setText(QString());
        gps_box->setTitle(QApplication::translate("Form", "GPS", Q_NULLPTR));
        longitude_label->setText(QApplication::translate("Form", "LONGITUDE", Q_NULLPTR));
        latitude_label->setText(QApplication::translate("Form", "LATITUDE", Q_NULLPTR));
        altitude_label_gps->setText(QApplication::translate("Form", "ALTITUDE", Q_NULLPTR));
        sat_nbr_label->setText(QApplication::translate("Form", "SATELLITES", Q_NULLPTR));
        hdop_label->setText(QApplication::translate("Form", "HDOP", Q_NULLPTR));
        altitude_max_label->setText(QApplication::translate("Form", "ALTITUDE MAX", Q_NULLPTR));
        longitude_panel->setText(QString());
        ft_unit_label_2->setText(QApplication::translate("Form", "ft", Q_NULLPTR));
        m_unit_label_2->setText(QApplication::translate("Form", "m", Q_NULLPTR));
        m_unit_label->setText(QApplication::translate("Form", "m", Q_NULLPTR));
        ft_unit_label->setText(QApplication::translate("Form", "ft", Q_NULLPTR));
        latitude_panel->setText(QString());
        hdop_panel->setText(QString());
        sat_nbr_panel->setText(QString());
        avionics_box->setTitle(QApplication::translate("Form", "Avionics Data", Q_NULLPTR));
        altitude_label_telemetry->setText(QApplication::translate("Form", "ALT.", Q_NULLPTR));
        speed_label->setText(QApplication::translate("Form", "SPEED", Q_NULLPTR));
        temperature_label->setText(QApplication::translate("Form", "TEMP", Q_NULLPTR));
        temperature_panel->setText(QString());
        pressure_panel->setText(QString());
        speed_panel->setText(QString());
        altitude_panel_telemetry->setText(QString());
        hpa_unit_label->setText(QApplication::translate("Form", "hPa", Q_NULLPTR));
        celcius_label->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" vertical-align:super;\">o</span>C</p></body></html>", Q_NULLPTR));
        m_s_unit_label->setText(QApplication::translate("Form", "m/s", Q_NULLPTR));
        avionics_state_label->setText(QApplication::translate("Form", "AV. STATE", Q_NULLPTR));
        pressure_label->setText(QApplication::translate("Form", "PRESS.", Q_NULLPTR));
        m_unit_label_3->setText(QApplication::translate("Form", "m", Q_NULLPTR));
        avionics_state_panel->setText(QString());
        groupBox->setTitle(QApplication::translate("Form", "GSE Sensor Data", Q_NULLPTR));
        tank_temp_panel->setText(QApplication::translate("Form", "26.9", Q_NULLPTR));
        celcius_label2->setText(QApplication::translate("Form", "[\302\260C]", Q_NULLPTR));
        tank_temp_label->setText(QApplication::translate("Form", "Tank Temp", Q_NULLPTR));
        hose_pressure_label->setText(QApplication::translate("Form", "Hose Pressure", Q_NULLPTR));
        hpa_panel->setText(QApplication::translate("Form", "[hPa]", Q_NULLPTR));
        hose_pressure_panel->setText(QApplication::translate("Form", "1013", Q_NULLPTR));
        hoes_temp_label->setText(QApplication::translate("Form", "Hose Temp", Q_NULLPTR));
        celcius_label_2->setText(QApplication::translate("Form", "[\302\260C]", Q_NULLPTR));
        rocket_weight_label->setText(QApplication::translate("Form", "Rocket Weight", Q_NULLPTR));
        hose_temp_panel->setText(QApplication::translate("Form", "45", Q_NULLPTR));
        rocket_weight_panel->setText(QApplication::translate("Form", "5.7", Q_NULLPTR));
        kg_label->setText(QApplication::translate("Form", "[kg]", Q_NULLPTR));
        groupBox1->setTitle(QApplication::translate("Form", "File Transmission", Q_NULLPTR));
        receiver_state_label->setText(QApplication::translate("Form", "Receiver State", Q_NULLPTR));
        transmitter_state_label->setText(QApplication::translate("Form", "Transmitter State", Q_NULLPTR));
        transmitter_state_panel->setText(QString());
        file_transmission_button->setText(QApplication::translate("Form", "Start File Transmission", Q_NULLPTR));
        receiver_state_panel->setText(QString());
        file_transmission_progress_bar->setFormat(QApplication::translate("Form", "%v / %m", Q_NULLPTR));
        ignition_box->setTitle(QApplication::translate("Form", "Ignition", Q_NULLPTR));
        code_3->setText(QString());
        code_2->setText(QString());
        code_1->setText(QString());
        code_0->setText(QString());
        ready_ignition_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        key_2_label->setText(QApplication::translate("Form", "KEY 2", Q_NULLPTR));
        key_1_label->setText(QApplication::translate("Form", "KEY 1", Q_NULLPTR));
        ignition_button->setText(QApplication::translate("Form", "Ready For Ignition", Q_NULLPTR));
        key_2_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        key_1_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        red_button_label->setText(QApplication::translate("Form", "Red Button", Q_NULLPTR));
        red_button_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        ignition_status_label->setText(QApplication::translate("Form", "Ignition", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logo->setToolTip(QApplication::translate("Form", "<html><head/><body><p>Project Bella Lui 2020</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        logo->setText(QString());
        time_panel->setText(QApplication::translate("Form", "44:44:44", Q_NULLPTR));
        xbee_button->setText(QApplication::translate("Form", "START XBee", Q_NULLPTR));
        change_theme->setText(QApplication::translate("Form", "Change Color Theme", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reset_button->setToolTip(QApplication::translate("Form", "Resets saved data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reset_button->setText(QApplication::translate("Form", "Reset", Q_NULLPTR));
        current_time_label->setText(QApplication::translate("Form", "Current Time:", Q_NULLPTR));
        accel_box->setTitle(QApplication::translate("Form", "Accelerometer", Q_NULLPTR));
        accel_x_label->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        accel_z_label->setText(QApplication::translate("Form", "Z", Q_NULLPTR));
        accel_y_label->setText(QApplication::translate("Form", "Y", Q_NULLPTR));
        accel_x_panel->setText(QString());
        accel_y_panel->setText(QString());
        accel_z_panel->setText(QString());
        norm_label->setText(QApplication::translate("Form", "Norm", Q_NULLPTR));
        norm_panel->setText(QString());
        av_states_box->setTitle(QApplication::translate("Form", "AV States", Q_NULLPTR));
        second_event_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        first_event_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        idle_state_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        coast_state_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        first_event_label->setText(QApplication::translate("Form", "1st Event", Q_NULLPTR));
        second_event_label->setText(QApplication::translate("Form", "2nd Event", Q_NULLPTR));
        sleep_state_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        sleep_label->setText(QApplication::translate("Form", "Sleep", Q_NULLPTR));
        filling_label->setText(QApplication::translate("Form", "Filling", Q_NULLPTR));
        filling_state_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        idle_label->setText(QApplication::translate("Form", "IDLE", Q_NULLPTR));
        liftoff_label->setText(QApplication::translate("Form", "Lift off", Q_NULLPTR));
        liftoff_state_ok_panel->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        coast_label->setText(QApplication::translate("Form", "Coast", Q_NULLPTR));
        com_box->setTitle(QApplication::translate("Form", "COM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        last_refresh_label->setToolTip(QApplication::translate("Form", "<html><head/><body><p>Last packet's timestamp</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        last_refresh_label->setText(QApplication::translate("Form", "Last Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        last_packet_nbr_label->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The last received packet's number (defined by TX)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        last_packet_nbr_label->setText(QApplication::translate("Form", "Last Packet Number", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        packets_second_label->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The number of packets received in last second</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        packets_second_label->setText(QApplication::translate("Form", "Packets/second", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        packets_second_bar->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The number of packets received in last second</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        packets_second_bar->setFormat(QApplication::translate("Form", "%v", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        last_packet_number_panel->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The last received packet's number (defined by TX)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        last_packet_number_panel->setText(QString());
#ifndef QT_NO_TOOLTIP
        received_pack_cnt_label->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The count of the received packets from the start of the program</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        received_pack_cnt_label->setText(QApplication::translate("Form", "Received Packet Count", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        last_refresh_panel->setToolTip(QApplication::translate("Form", "<html><head/><body><p>Last packet's timestamp</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        last_refresh_panel->setText(QString());
#ifndef QT_NO_TOOLTIP
        received_pack_cnt_panel->setToolTip(QApplication::translate("Form", "<html><head/><body><p>The count of the received packets from the start of the program</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        received_pack_cnt_panel->setText(QString());
#ifndef QT_NO_TOOLTIP
        miss_label->setToolTip(QApplication::translate("Form", "<html><head/><body><p>Lost packets in last 2 seconds</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        miss_label->setText(QApplication::translate("Form", "Misses", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        miss_panel->setToolTip(QApplication::translate("Form", "<html><head/><body><p>Lost packets in last 2 seconds</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        miss_panel->setText(QString());
        corrupted_label->setText(QApplication::translate("Form", "Corrupted Packets", Q_NULLPTR));
        corrupted_panel->setText(QString());
        last_datagram_id->setText(QApplication::translate("Form", "Last Datagram ID", Q_NULLPTR));
        last_datagram_id_panel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRESS_ALTM26747_H

