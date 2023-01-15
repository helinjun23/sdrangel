/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGFT8DemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFT8DemodSettings::SWGFT8DemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFT8DemodSettings::SWGFT8DemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    filter_index = 0;
    m_filter_index_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    fft_window = 0;
    m_fft_window_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    ft8_sample_rate = 0;
    m_ft8_sample_rate_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    spectrum_config = nullptr;
    m_spectrum_config_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGFT8DemodSettings::~SWGFT8DemodSettings() {
    this->cleanup();
}

void
SWGFT8DemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    filter_index = 0;
    m_filter_index_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    fft_window = 0;
    m_fft_window_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    ft8_sample_rate = 0;
    m_ft8_sample_rate_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    spectrum_config = new SWGGLSpectrum();
    m_spectrum_config_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGFT8DemodSettings::cleanup() {









    if(title != nullptr) { 
        delete title;
    }



    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(spectrum_config != nullptr) { 
        delete spectrum_config;
    }
    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGFT8DemodSettings*
SWGFT8DemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFT8DemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&filter_index, pJson["filterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&span_log2, pJson["spanLog2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&low_cutoff, pJson["lowCutoff"], "float", "");
    
    ::SWGSDRangel::setValue(&fft_window, pJson["fftWindow"], "qint32", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&agc, pJson["agc"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&ft8_sample_rate, pJson["ft8SampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&spectrum_config, pJson["spectrumConfig"], "SWGGLSpectrum", "SWGGLSpectrum");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGFT8DemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFT8DemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_filter_index_isSet){
        obj->insert("filterIndex", QJsonValue(filter_index));
    }
    if(m_span_log2_isSet){
        obj->insert("spanLog2", QJsonValue(span_log2));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_low_cutoff_isSet){
        obj->insert("lowCutoff", QJsonValue(low_cutoff));
    }
    if(m_fft_window_isSet){
        obj->insert("fftWindow", QJsonValue(fft_window));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_agc_isSet){
        obj->insert("agc", QJsonValue(agc));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_ft8_sample_rate_isSet){
        obj->insert("ft8SampleRate", QJsonValue(ft8_sample_rate));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((spectrum_config != nullptr) && (spectrum_config->isSet())){
        toJsonValue(QString("spectrumConfig"), spectrum_config, obj, QString("SWGGLSpectrum"));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

qint64
SWGFT8DemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGFT8DemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

qint32
SWGFT8DemodSettings::getFilterIndex() {
    return filter_index;
}
void
SWGFT8DemodSettings::setFilterIndex(qint32 filter_index) {
    this->filter_index = filter_index;
    this->m_filter_index_isSet = true;
}

qint32
SWGFT8DemodSettings::getSpanLog2() {
    return span_log2;
}
void
SWGFT8DemodSettings::setSpanLog2(qint32 span_log2) {
    this->span_log2 = span_log2;
    this->m_span_log2_isSet = true;
}

float
SWGFT8DemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGFT8DemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGFT8DemodSettings::getLowCutoff() {
    return low_cutoff;
}
void
SWGFT8DemodSettings::setLowCutoff(float low_cutoff) {
    this->low_cutoff = low_cutoff;
    this->m_low_cutoff_isSet = true;
}

qint32
SWGFT8DemodSettings::getFftWindow() {
    return fft_window;
}
void
SWGFT8DemodSettings::setFftWindow(qint32 fft_window) {
    this->fft_window = fft_window;
    this->m_fft_window_isSet = true;
}

float
SWGFT8DemodSettings::getVolume() {
    return volume;
}
void
SWGFT8DemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

qint32
SWGFT8DemodSettings::getAgc() {
    return agc;
}
void
SWGFT8DemodSettings::setAgc(qint32 agc) {
    this->agc = agc;
    this->m_agc_isSet = true;
}

qint32
SWGFT8DemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGFT8DemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGFT8DemodSettings::getTitle() {
    return title;
}
void
SWGFT8DemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGFT8DemodSettings::getFt8SampleRate() {
    return ft8_sample_rate;
}
void
SWGFT8DemodSettings::setFt8SampleRate(qint32 ft8_sample_rate) {
    this->ft8_sample_rate = ft8_sample_rate;
    this->m_ft8_sample_rate_isSet = true;
}

qint32
SWGFT8DemodSettings::getStreamIndex() {
    return stream_index;
}
void
SWGFT8DemodSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGFT8DemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGFT8DemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGFT8DemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGFT8DemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGFT8DemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGFT8DemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGFT8DemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGFT8DemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGFT8DemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGFT8DemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGGLSpectrum*
SWGFT8DemodSettings::getSpectrumConfig() {
    return spectrum_config;
}
void
SWGFT8DemodSettings::setSpectrumConfig(SWGGLSpectrum* spectrum_config) {
    this->spectrum_config = spectrum_config;
    this->m_spectrum_config_isSet = true;
}

SWGChannelMarker*
SWGFT8DemodSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGFT8DemodSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGFT8DemodSettings::getRollupState() {
    return rollup_state;
}
void
SWGFT8DemodSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGFT8DemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_filter_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_span_log2_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_low_cutoff_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fft_window_isSet){
            isObjectUpdated = true; break;
        }
        if(m_volume_isSet){
            isObjectUpdated = true; break;
        }
        if(m_agc_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_ft8_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(spectrum_config && spectrum_config->isSet()){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

