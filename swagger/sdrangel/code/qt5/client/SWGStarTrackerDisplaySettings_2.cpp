/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGStarTrackerDisplaySettings_2.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGStarTrackerDisplaySettings_2::SWGStarTrackerDisplaySettings_2(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStarTrackerDisplaySettings_2::SWGStarTrackerDisplaySettings_2() {
    date_time = nullptr;
    m_date_time_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
}

SWGStarTrackerDisplaySettings_2::~SWGStarTrackerDisplaySettings_2() {
    this->cleanup();
}

void
SWGStarTrackerDisplaySettings_2::init() {
    date_time = new QString("");
    m_date_time_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
}

void
SWGStarTrackerDisplaySettings_2::cleanup() {
    if(date_time != nullptr) { 
        delete date_time;
    }


}

SWGStarTrackerDisplaySettings_2*
SWGStarTrackerDisplaySettings_2::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStarTrackerDisplaySettings_2::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&date_time, pJson["dateTime"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&azimuth, pJson["azimuth"], "float", "");
    
    ::SWGSDRangel::setValue(&elevation, pJson["elevation"], "float", "");
    
}

QString
SWGStarTrackerDisplaySettings_2::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGStarTrackerDisplaySettings_2::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(date_time != nullptr && *date_time != QString("")){
        toJsonValue(QString("dateTime"), date_time, obj, QString("QString"));
    }
    if(m_azimuth_isSet){
        obj->insert("azimuth", QJsonValue(azimuth));
    }
    if(m_elevation_isSet){
        obj->insert("elevation", QJsonValue(elevation));
    }

    return obj;
}

QString*
SWGStarTrackerDisplaySettings_2::getDateTime() {
    return date_time;
}
void
SWGStarTrackerDisplaySettings_2::setDateTime(QString* date_time) {
    this->date_time = date_time;
    this->m_date_time_isSet = true;
}

float
SWGStarTrackerDisplaySettings_2::getAzimuth() {
    return azimuth;
}
void
SWGStarTrackerDisplaySettings_2::setAzimuth(float azimuth) {
    this->azimuth = azimuth;
    this->m_azimuth_isSet = true;
}

float
SWGStarTrackerDisplaySettings_2::getElevation() {
    return elevation;
}
void
SWGStarTrackerDisplaySettings_2::setElevation(float elevation) {
    this->elevation = elevation;
    this->m_elevation_isSet = true;
}


bool
SWGStarTrackerDisplaySettings_2::isSet(){
    bool isObjectUpdated = false;
    do{
        if(date_time && *date_time != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_azimuth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elevation_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}
