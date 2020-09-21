// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/telemetry/telemetry.proto)

#include <iomanip>

#include "telemetry_impl.h"
#include "plugins/telemetry/telemetry.h"

namespace mavsdk {

using Position = Telemetry::Position;
using Quaternion = Telemetry::Quaternion;
using EulerAngle = Telemetry::EulerAngle;
using AngularVelocityBody = Telemetry::AngularVelocityBody;
using GpsInfo = Telemetry::GpsInfo;
using Battery = Telemetry::Battery;
using Health = Telemetry::Health;
using RcStatus = Telemetry::RcStatus;
using StatusText = Telemetry::StatusText;
using ActuatorControlTarget = Telemetry::ActuatorControlTarget;
using ActuatorOutputStatus = Telemetry::ActuatorOutputStatus;
using Covariance = Telemetry::Covariance;
using VelocityBody = Telemetry::VelocityBody;
using PositionBody = Telemetry::PositionBody;
using Odometry = Telemetry::Odometry;
using PositionNed = Telemetry::PositionNed;
using VelocityNed = Telemetry::VelocityNed;
using PositionVelocityNed = Telemetry::PositionVelocityNed;
using GroundTruth = Telemetry::GroundTruth;
using FixedwingMetrics = Telemetry::FixedwingMetrics;
using AccelerationFrd = Telemetry::AccelerationFrd;
using AngularVelocityFrd = Telemetry::AngularVelocityFrd;
using MagneticFieldFrd = Telemetry::MagneticFieldFrd;
using Imu = Telemetry::Imu;

Telemetry::Telemetry(System& system) : PluginBase(), _impl{new TelemetryImpl(system)} {}

Telemetry::~Telemetry() {}

void Telemetry::subscribe_position(PositionCallback callback)
{
    _impl->position_async(callback);
}

Telemetry::Position Telemetry::position() const
{
    return _impl->position();
}

void Telemetry::subscribe_home(HomeCallback callback)
{
    _impl->home_async(callback);
}

Telemetry::Position Telemetry::home() const
{
    return _impl->home();
}

void Telemetry::subscribe_in_air(InAirCallback callback)
{
    _impl->in_air_async(callback);
}

bool Telemetry::in_air() const
{
    return _impl->in_air();
}

void Telemetry::subscribe_landed_state(LandedStateCallback callback)
{
    _impl->landed_state_async(callback);
}

Telemetry::LandedState Telemetry::landed_state() const
{
    return _impl->landed_state();
}

void Telemetry::subscribe_armed(ArmedCallback callback)
{
    _impl->armed_async(callback);
}

bool Telemetry::armed() const
{
    return _impl->armed();
}

void Telemetry::subscribe_attitude_quaternion(AttitudeQuaternionCallback callback)
{
    _impl->attitude_quaternion_async(callback);
}

Telemetry::Quaternion Telemetry::attitude_quaternion() const
{
    return _impl->attitude_quaternion();
}

void Telemetry::subscribe_attitude_euler(AttitudeEulerCallback callback)
{
    _impl->attitude_euler_async(callback);
}

Telemetry::EulerAngle Telemetry::attitude_euler() const
{
    return _impl->attitude_euler();
}

void Telemetry::subscribe_attitude_angular_velocity_body(
    AttitudeAngularVelocityBodyCallback callback)
{
    _impl->attitude_angular_velocity_body_async(callback);
}

Telemetry::AngularVelocityBody Telemetry::attitude_angular_velocity_body() const
{
    return _impl->attitude_angular_velocity_body();
}

void Telemetry::subscribe_camera_attitude_quaternion(CameraAttitudeQuaternionCallback callback)
{
    _impl->camera_attitude_quaternion_async(callback);
}

Telemetry::Quaternion Telemetry::camera_attitude_quaternion() const
{
    return _impl->camera_attitude_quaternion();
}

void Telemetry::subscribe_camera_attitude_euler(CameraAttitudeEulerCallback callback)
{
    _impl->camera_attitude_euler_async(callback);
}

Telemetry::EulerAngle Telemetry::camera_attitude_euler() const
{
    return _impl->camera_attitude_euler();
}

void Telemetry::subscribe_velocity_ned(VelocityNedCallback callback)
{
    _impl->velocity_ned_async(callback);
}

Telemetry::VelocityNed Telemetry::velocity_ned() const
{
    return _impl->velocity_ned();
}

void Telemetry::subscribe_gps_info(GpsInfoCallback callback)
{
    _impl->gps_info_async(callback);
}

Telemetry::GpsInfo Telemetry::gps_info() const
{
    return _impl->gps_info();
}

void Telemetry::subscribe_battery(BatteryCallback callback)
{
    _impl->battery_async(callback);
}

Telemetry::Battery Telemetry::battery() const
{
    return _impl->battery();
}

void Telemetry::subscribe_flight_mode(FlightModeCallback callback)
{
    _impl->flight_mode_async(callback);
}

Telemetry::FlightMode Telemetry::flight_mode() const
{
    return _impl->flight_mode();
}

void Telemetry::subscribe_health(HealthCallback callback)
{
    _impl->health_async(callback);
}

Telemetry::Health Telemetry::health() const
{
    return _impl->health();
}

void Telemetry::subscribe_rc_status(RcStatusCallback callback)
{
    _impl->rc_status_async(callback);
}

Telemetry::RcStatus Telemetry::rc_status() const
{
    return _impl->rc_status();
}

void Telemetry::subscribe_status_text(StatusTextCallback callback)
{
    _impl->status_text_async(callback);
}

Telemetry::StatusText Telemetry::status_text() const
{
    return _impl->status_text();
}

void Telemetry::subscribe_actuator_control_target(ActuatorControlTargetCallback callback)
{
    _impl->actuator_control_target_async(callback);
}

Telemetry::ActuatorControlTarget Telemetry::actuator_control_target() const
{
    return _impl->actuator_control_target();
}

void Telemetry::subscribe_actuator_output_status(ActuatorOutputStatusCallback callback)
{
    _impl->actuator_output_status_async(callback);
}

Telemetry::ActuatorOutputStatus Telemetry::actuator_output_status() const
{
    return _impl->actuator_output_status();
}

void Telemetry::subscribe_odometry(OdometryCallback callback)
{
    _impl->odometry_async(callback);
}

Telemetry::Odometry Telemetry::odometry() const
{
    return _impl->odometry();
}

void Telemetry::subscribe_position_velocity_ned(PositionVelocityNedCallback callback)
{
    _impl->position_velocity_ned_async(callback);
}

Telemetry::PositionVelocityNed Telemetry::position_velocity_ned() const
{
    return _impl->position_velocity_ned();
}

void Telemetry::subscribe_ground_truth(GroundTruthCallback callback)
{
    _impl->ground_truth_async(callback);
}

Telemetry::GroundTruth Telemetry::ground_truth() const
{
    return _impl->ground_truth();
}

void Telemetry::subscribe_fixedwing_metrics(FixedwingMetricsCallback callback)
{
    _impl->fixedwing_metrics_async(callback);
}

Telemetry::FixedwingMetrics Telemetry::fixedwing_metrics() const
{
    return _impl->fixedwing_metrics();
}

void Telemetry::subscribe_imu(ImuCallback callback)
{
    _impl->imu_async(callback);
}

Telemetry::Imu Telemetry::imu() const
{
    return _impl->imu();
}

void Telemetry::subscribe_health_all_ok(HealthAllOkCallback callback)
{
    _impl->health_all_ok_async(callback);
}

bool Telemetry::health_all_ok() const
{
    return _impl->health_all_ok();
}

void Telemetry::subscribe_unix_epoch_time(UnixEpochTimeCallback callback)
{
    _impl->unix_epoch_time_async(callback);
}

uint64_t Telemetry::unix_epoch_time() const
{
    return _impl->unix_epoch_time();
}

void Telemetry::set_rate_position_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_position_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_position(double rate_hz) const
{
    return _impl->set_rate_position(rate_hz);
}

void Telemetry::set_rate_home_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_home_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_home(double rate_hz) const
{
    return _impl->set_rate_home(rate_hz);
}

void Telemetry::set_rate_in_air_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_in_air_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_in_air(double rate_hz) const
{
    return _impl->set_rate_in_air(rate_hz);
}

void Telemetry::set_rate_landed_state_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_landed_state_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_landed_state(double rate_hz) const
{
    return _impl->set_rate_landed_state(rate_hz);
}

void Telemetry::set_rate_attitude_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_attitude_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_attitude(double rate_hz) const
{
    return _impl->set_rate_attitude(rate_hz);
}

void Telemetry::set_rate_camera_attitude_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_camera_attitude_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_camera_attitude(double rate_hz) const
{
    return _impl->set_rate_camera_attitude(rate_hz);
}

void Telemetry::set_rate_velocity_ned_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_velocity_ned_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_velocity_ned(double rate_hz) const
{
    return _impl->set_rate_velocity_ned(rate_hz);
}

void Telemetry::set_rate_gps_info_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_gps_info_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_gps_info(double rate_hz) const
{
    return _impl->set_rate_gps_info(rate_hz);
}

void Telemetry::set_rate_battery_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_battery_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_battery(double rate_hz) const
{
    return _impl->set_rate_battery(rate_hz);
}

void Telemetry::set_rate_rc_status_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_rc_status_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_rc_status(double rate_hz) const
{
    return _impl->set_rate_rc_status(rate_hz);
}

void Telemetry::set_rate_actuator_control_target_async(
    double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_actuator_control_target_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_actuator_control_target(double rate_hz) const
{
    return _impl->set_rate_actuator_control_target(rate_hz);
}

void Telemetry::set_rate_actuator_output_status_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_actuator_output_status_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_actuator_output_status(double rate_hz) const
{
    return _impl->set_rate_actuator_output_status(rate_hz);
}

void Telemetry::set_rate_odometry_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_odometry_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_odometry(double rate_hz) const
{
    return _impl->set_rate_odometry(rate_hz);
}

void Telemetry::set_rate_position_velocity_ned_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_position_velocity_ned_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_position_velocity_ned(double rate_hz) const
{
    return _impl->set_rate_position_velocity_ned(rate_hz);
}

void Telemetry::set_rate_ground_truth_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_ground_truth_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_ground_truth(double rate_hz) const
{
    return _impl->set_rate_ground_truth(rate_hz);
}

void Telemetry::set_rate_fixedwing_metrics_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_fixedwing_metrics_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_fixedwing_metrics(double rate_hz) const
{
    return _impl->set_rate_fixedwing_metrics(rate_hz);
}

void Telemetry::set_rate_imu_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_imu_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_imu(double rate_hz) const
{
    return _impl->set_rate_imu(rate_hz);
}

void Telemetry::set_rate_unix_epoch_time_async(double rate_hz, const ResultCallback callback)
{
    _impl->set_rate_unix_epoch_time_async(rate_hz, callback);
}

Telemetry::Result Telemetry::set_rate_unix_epoch_time(double rate_hz) const
{
    return _impl->set_rate_unix_epoch_time(rate_hz);
}

bool operator==(const Telemetry::Position& lhs, const Telemetry::Position& rhs)
{
    return ((std::isnan(rhs.latitude_deg) && std::isnan(lhs.latitude_deg)) ||
            rhs.latitude_deg == lhs.latitude_deg) &&
           ((std::isnan(rhs.longitude_deg) && std::isnan(lhs.longitude_deg)) ||
            rhs.longitude_deg == lhs.longitude_deg) &&
           ((std::isnan(rhs.absolute_altitude_m) && std::isnan(lhs.absolute_altitude_m)) ||
            rhs.absolute_altitude_m == lhs.absolute_altitude_m) &&
           ((std::isnan(rhs.relative_altitude_m) && std::isnan(lhs.relative_altitude_m)) ||
            rhs.relative_altitude_m == lhs.relative_altitude_m);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Position const& position)
{
    str << std::setprecision(15);
    str << "position:" << '\n' << "{\n";
    str << "    latitude_deg: " << position.latitude_deg << '\n';
    str << "    longitude_deg: " << position.longitude_deg << '\n';
    str << "    absolute_altitude_m: " << position.absolute_altitude_m << '\n';
    str << "    relative_altitude_m: " << position.relative_altitude_m << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::Quaternion& lhs, const Telemetry::Quaternion& rhs)
{
    return ((std::isnan(rhs.w) && std::isnan(lhs.w)) || rhs.w == lhs.w) &&
           ((std::isnan(rhs.x) && std::isnan(lhs.x)) || rhs.x == lhs.x) &&
           ((std::isnan(rhs.y) && std::isnan(lhs.y)) || rhs.y == lhs.y) &&
           ((std::isnan(rhs.z) && std::isnan(lhs.z)) || rhs.z == lhs.z);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Quaternion const& quaternion)
{
    str << std::setprecision(15);
    str << "quaternion:" << '\n' << "{\n";
    str << "    w: " << quaternion.w << '\n';
    str << "    x: " << quaternion.x << '\n';
    str << "    y: " << quaternion.y << '\n';
    str << "    z: " << quaternion.z << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::EulerAngle& lhs, const Telemetry::EulerAngle& rhs)
{
    return ((std::isnan(rhs.roll_deg) && std::isnan(lhs.roll_deg)) ||
            rhs.roll_deg == lhs.roll_deg) &&
           ((std::isnan(rhs.pitch_deg) && std::isnan(lhs.pitch_deg)) ||
            rhs.pitch_deg == lhs.pitch_deg) &&
           ((std::isnan(rhs.yaw_deg) && std::isnan(lhs.yaw_deg)) || rhs.yaw_deg == lhs.yaw_deg);
}

std::ostream& operator<<(std::ostream& str, Telemetry::EulerAngle const& euler_angle)
{
    str << std::setprecision(15);
    str << "euler_angle:" << '\n' << "{\n";
    str << "    roll_deg: " << euler_angle.roll_deg << '\n';
    str << "    pitch_deg: " << euler_angle.pitch_deg << '\n';
    str << "    yaw_deg: " << euler_angle.yaw_deg << '\n';
    str << '}';
    return str;
}

bool operator==(
    const Telemetry::AngularVelocityBody& lhs, const Telemetry::AngularVelocityBody& rhs)
{
    return ((std::isnan(rhs.roll_rad_s) && std::isnan(lhs.roll_rad_s)) ||
            rhs.roll_rad_s == lhs.roll_rad_s) &&
           ((std::isnan(rhs.pitch_rad_s) && std::isnan(lhs.pitch_rad_s)) ||
            rhs.pitch_rad_s == lhs.pitch_rad_s) &&
           ((std::isnan(rhs.yaw_rad_s) && std::isnan(lhs.yaw_rad_s)) ||
            rhs.yaw_rad_s == lhs.yaw_rad_s);
}

std::ostream&
operator<<(std::ostream& str, Telemetry::AngularVelocityBody const& angular_velocity_body)
{
    str << std::setprecision(15);
    str << "angular_velocity_body:" << '\n' << "{\n";
    str << "    roll_rad_s: " << angular_velocity_body.roll_rad_s << '\n';
    str << "    pitch_rad_s: " << angular_velocity_body.pitch_rad_s << '\n';
    str << "    yaw_rad_s: " << angular_velocity_body.yaw_rad_s << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::GpsInfo& lhs, const Telemetry::GpsInfo& rhs)
{
    return (rhs.num_satellites == lhs.num_satellites) && (rhs.fix_type == lhs.fix_type);
}

std::ostream& operator<<(std::ostream& str, Telemetry::GpsInfo const& gps_info)
{
    str << std::setprecision(15);
    str << "gps_info:" << '\n' << "{\n";
    str << "    num_satellites: " << gps_info.num_satellites << '\n';
    str << "    fix_type: " << gps_info.fix_type << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::Battery& lhs, const Telemetry::Battery& rhs)
{
    return ((std::isnan(rhs.voltage_v) && std::isnan(lhs.voltage_v)) ||
            rhs.voltage_v == lhs.voltage_v) &&
           ((std::isnan(rhs.remaining_percent) && std::isnan(lhs.remaining_percent)) ||
            rhs.remaining_percent == lhs.remaining_percent);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Battery const& battery)
{
    str << std::setprecision(15);
    str << "battery:" << '\n' << "{\n";
    str << "    voltage_v: " << battery.voltage_v << '\n';
    str << "    remaining_percent: " << battery.remaining_percent << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::Health& lhs, const Telemetry::Health& rhs)
{
    return (rhs.is_gyrometer_calibration_ok == lhs.is_gyrometer_calibration_ok) &&
           (rhs.is_accelerometer_calibration_ok == lhs.is_accelerometer_calibration_ok) &&
           (rhs.is_magnetometer_calibration_ok == lhs.is_magnetometer_calibration_ok) &&
           (rhs.is_level_calibration_ok == lhs.is_level_calibration_ok) &&
           (rhs.is_local_position_ok == lhs.is_local_position_ok) &&
           (rhs.is_global_position_ok == lhs.is_global_position_ok) &&
           (rhs.is_home_position_ok == lhs.is_home_position_ok);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Health const& health)
{
    str << std::setprecision(15);
    str << "health:" << '\n' << "{\n";
    str << "    is_gyrometer_calibration_ok: " << health.is_gyrometer_calibration_ok << '\n';
    str << "    is_accelerometer_calibration_ok: " << health.is_accelerometer_calibration_ok
        << '\n';
    str << "    is_magnetometer_calibration_ok: " << health.is_magnetometer_calibration_ok << '\n';
    str << "    is_level_calibration_ok: " << health.is_level_calibration_ok << '\n';
    str << "    is_local_position_ok: " << health.is_local_position_ok << '\n';
    str << "    is_global_position_ok: " << health.is_global_position_ok << '\n';
    str << "    is_home_position_ok: " << health.is_home_position_ok << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::RcStatus& lhs, const Telemetry::RcStatus& rhs)
{
    return (rhs.was_available_once == lhs.was_available_once) &&
           (rhs.is_available == lhs.is_available) &&
           ((std::isnan(rhs.signal_strength_percent) && std::isnan(lhs.signal_strength_percent)) ||
            rhs.signal_strength_percent == lhs.signal_strength_percent);
}

std::ostream& operator<<(std::ostream& str, Telemetry::RcStatus const& rc_status)
{
    str << std::setprecision(15);
    str << "rc_status:" << '\n' << "{\n";
    str << "    was_available_once: " << rc_status.was_available_once << '\n';
    str << "    is_available: " << rc_status.is_available << '\n';
    str << "    signal_strength_percent: " << rc_status.signal_strength_percent << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::StatusText& lhs, const Telemetry::StatusText& rhs)
{
    return (rhs.type == lhs.type) && (rhs.text == lhs.text);
}

std::ostream& operator<<(std::ostream& str, Telemetry::StatusText const& status_text)
{
    str << std::setprecision(15);
    str << "status_text:" << '\n' << "{\n";
    str << "    type: " << status_text.type << '\n';
    str << "    text: " << status_text.text << '\n';
    str << '}';
    return str;
}

bool operator==(
    const Telemetry::ActuatorControlTarget& lhs, const Telemetry::ActuatorControlTarget& rhs)
{
    return (rhs.group == lhs.group) && (rhs.controls == lhs.controls);
}

std::ostream&
operator<<(std::ostream& str, Telemetry::ActuatorControlTarget const& actuator_control_target)
{
    str << std::setprecision(15);
    str << "actuator_control_target:" << '\n' << "{\n";
    str << "    group: " << actuator_control_target.group << '\n';
    str << "    controls: [";
    for (auto it = actuator_control_target.controls.begin();
         it != actuator_control_target.controls.end();
         ++it) {
        str << *it;
        str << (it + 1 != actuator_control_target.controls.end() ? ", " : "]\n");
    }
    str << '}';
    return str;
}

bool operator==(
    const Telemetry::ActuatorOutputStatus& lhs, const Telemetry::ActuatorOutputStatus& rhs)
{
    return (rhs.active == lhs.active) && (rhs.actuator == lhs.actuator);
}

std::ostream&
operator<<(std::ostream& str, Telemetry::ActuatorOutputStatus const& actuator_output_status)
{
    str << std::setprecision(15);
    str << "actuator_output_status:" << '\n' << "{\n";
    str << "    active: " << actuator_output_status.active << '\n';
    str << "    actuator: [";
    for (auto it = actuator_output_status.actuator.begin();
         it != actuator_output_status.actuator.end();
         ++it) {
        str << *it;
        str << (it + 1 != actuator_output_status.actuator.end() ? ", " : "]\n");
    }
    str << '}';
    return str;
}

bool operator==(const Telemetry::Covariance& lhs, const Telemetry::Covariance& rhs)
{
    return (rhs.covariance_matrix == lhs.covariance_matrix);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Covariance const& covariance)
{
    str << std::setprecision(15);
    str << "covariance:" << '\n' << "{\n";
    str << "    covariance_matrix: [";
    for (auto it = covariance.covariance_matrix.begin(); it != covariance.covariance_matrix.end();
         ++it) {
        str << *it;
        str << (it + 1 != covariance.covariance_matrix.end() ? ", " : "]\n");
    }
    str << '}';
    return str;
}

bool operator==(const Telemetry::VelocityBody& lhs, const Telemetry::VelocityBody& rhs)
{
    return ((std::isnan(rhs.x_m_s) && std::isnan(lhs.x_m_s)) || rhs.x_m_s == lhs.x_m_s) &&
           ((std::isnan(rhs.y_m_s) && std::isnan(lhs.y_m_s)) || rhs.y_m_s == lhs.y_m_s) &&
           ((std::isnan(rhs.z_m_s) && std::isnan(lhs.z_m_s)) || rhs.z_m_s == lhs.z_m_s);
}

std::ostream& operator<<(std::ostream& str, Telemetry::VelocityBody const& velocity_body)
{
    str << std::setprecision(15);
    str << "velocity_body:" << '\n' << "{\n";
    str << "    x_m_s: " << velocity_body.x_m_s << '\n';
    str << "    y_m_s: " << velocity_body.y_m_s << '\n';
    str << "    z_m_s: " << velocity_body.z_m_s << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::PositionBody& lhs, const Telemetry::PositionBody& rhs)
{
    return ((std::isnan(rhs.x_m) && std::isnan(lhs.x_m)) || rhs.x_m == lhs.x_m) &&
           ((std::isnan(rhs.y_m) && std::isnan(lhs.y_m)) || rhs.y_m == lhs.y_m) &&
           ((std::isnan(rhs.z_m) && std::isnan(lhs.z_m)) || rhs.z_m == lhs.z_m);
}

std::ostream& operator<<(std::ostream& str, Telemetry::PositionBody const& position_body)
{
    str << std::setprecision(15);
    str << "position_body:" << '\n' << "{\n";
    str << "    x_m: " << position_body.x_m << '\n';
    str << "    y_m: " << position_body.y_m << '\n';
    str << "    z_m: " << position_body.z_m << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, Telemetry::Odometry::MavFrame const& mav_frame)
{
    switch (mav_frame) {
        case Telemetry::Odometry::MavFrame::Undef:
            return str << "Undef";
        case Telemetry::Odometry::MavFrame::BodyNed:
            return str << "Body Ned";
        case Telemetry::Odometry::MavFrame::VisionNed:
            return str << "Vision Ned";
        case Telemetry::Odometry::MavFrame::EstimNed:
            return str << "Estim Ned";
        default:
            return str << "Unknown";
    }
}
bool operator==(const Telemetry::Odometry& lhs, const Telemetry::Odometry& rhs)
{
    return (rhs.time_usec == lhs.time_usec) && (rhs.frame_id == lhs.frame_id) &&
           (rhs.child_frame_id == lhs.child_frame_id) && (rhs.position_body == lhs.position_body) &&
           (rhs.q == lhs.q) && (rhs.velocity_body == lhs.velocity_body) &&
           (rhs.angular_velocity_body == lhs.angular_velocity_body) &&
           (rhs.pose_covariance == lhs.pose_covariance) &&
           (rhs.velocity_covariance == lhs.velocity_covariance);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Odometry const& odometry)
{
    str << std::setprecision(15);
    str << "odometry:" << '\n' << "{\n";
    str << "    time_usec: " << odometry.time_usec << '\n';
    str << "    frame_id: " << odometry.frame_id << '\n';
    str << "    child_frame_id: " << odometry.child_frame_id << '\n';
    str << "    position_body: " << odometry.position_body << '\n';
    str << "    q: " << odometry.q << '\n';
    str << "    velocity_body: " << odometry.velocity_body << '\n';
    str << "    angular_velocity_body: " << odometry.angular_velocity_body << '\n';
    str << "    pose_covariance: " << odometry.pose_covariance << '\n';
    str << "    velocity_covariance: " << odometry.velocity_covariance << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::PositionNed& lhs, const Telemetry::PositionNed& rhs)
{
    return ((std::isnan(rhs.north_m) && std::isnan(lhs.north_m)) || rhs.north_m == lhs.north_m) &&
           ((std::isnan(rhs.east_m) && std::isnan(lhs.east_m)) || rhs.east_m == lhs.east_m) &&
           ((std::isnan(rhs.down_m) && std::isnan(lhs.down_m)) || rhs.down_m == lhs.down_m);
}

std::ostream& operator<<(std::ostream& str, Telemetry::PositionNed const& position_ned)
{
    str << std::setprecision(15);
    str << "position_ned:" << '\n' << "{\n";
    str << "    north_m: " << position_ned.north_m << '\n';
    str << "    east_m: " << position_ned.east_m << '\n';
    str << "    down_m: " << position_ned.down_m << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::VelocityNed& lhs, const Telemetry::VelocityNed& rhs)
{
    return ((std::isnan(rhs.north_m_s) && std::isnan(lhs.north_m_s)) ||
            rhs.north_m_s == lhs.north_m_s) &&
           ((std::isnan(rhs.east_m_s) && std::isnan(lhs.east_m_s)) ||
            rhs.east_m_s == lhs.east_m_s) &&
           ((std::isnan(rhs.down_m_s) && std::isnan(lhs.down_m_s)) || rhs.down_m_s == lhs.down_m_s);
}

std::ostream& operator<<(std::ostream& str, Telemetry::VelocityNed const& velocity_ned)
{
    str << std::setprecision(15);
    str << "velocity_ned:" << '\n' << "{\n";
    str << "    north_m_s: " << velocity_ned.north_m_s << '\n';
    str << "    east_m_s: " << velocity_ned.east_m_s << '\n';
    str << "    down_m_s: " << velocity_ned.down_m_s << '\n';
    str << '}';
    return str;
}

bool operator==(
    const Telemetry::PositionVelocityNed& lhs, const Telemetry::PositionVelocityNed& rhs)
{
    return (rhs.position == lhs.position) && (rhs.velocity == lhs.velocity);
}

std::ostream&
operator<<(std::ostream& str, Telemetry::PositionVelocityNed const& position_velocity_ned)
{
    str << std::setprecision(15);
    str << "position_velocity_ned:" << '\n' << "{\n";
    str << "    position: " << position_velocity_ned.position << '\n';
    str << "    velocity: " << position_velocity_ned.velocity << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::GroundTruth& lhs, const Telemetry::GroundTruth& rhs)
{
    return ((std::isnan(rhs.latitude_deg) && std::isnan(lhs.latitude_deg)) ||
            rhs.latitude_deg == lhs.latitude_deg) &&
           ((std::isnan(rhs.longitude_deg) && std::isnan(lhs.longitude_deg)) ||
            rhs.longitude_deg == lhs.longitude_deg) &&
           ((std::isnan(rhs.absolute_altitude_m) && std::isnan(lhs.absolute_altitude_m)) ||
            rhs.absolute_altitude_m == lhs.absolute_altitude_m);
}

std::ostream& operator<<(std::ostream& str, Telemetry::GroundTruth const& ground_truth)
{
    str << std::setprecision(15);
    str << "ground_truth:" << '\n' << "{\n";
    str << "    latitude_deg: " << ground_truth.latitude_deg << '\n';
    str << "    longitude_deg: " << ground_truth.longitude_deg << '\n';
    str << "    absolute_altitude_m: " << ground_truth.absolute_altitude_m << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::FixedwingMetrics& lhs, const Telemetry::FixedwingMetrics& rhs)
{
    return ((std::isnan(rhs.airspeed_m_s) && std::isnan(lhs.airspeed_m_s)) ||
            rhs.airspeed_m_s == lhs.airspeed_m_s) &&
           ((std::isnan(rhs.throttle_percentage) && std::isnan(lhs.throttle_percentage)) ||
            rhs.throttle_percentage == lhs.throttle_percentage) &&
           ((std::isnan(rhs.climb_rate_m_s) && std::isnan(lhs.climb_rate_m_s)) ||
            rhs.climb_rate_m_s == lhs.climb_rate_m_s);
}

std::ostream& operator<<(std::ostream& str, Telemetry::FixedwingMetrics const& fixedwing_metrics)
{
    str << std::setprecision(15);
    str << "fixedwing_metrics:" << '\n' << "{\n";
    str << "    airspeed_m_s: " << fixedwing_metrics.airspeed_m_s << '\n';
    str << "    throttle_percentage: " << fixedwing_metrics.throttle_percentage << '\n';
    str << "    climb_rate_m_s: " << fixedwing_metrics.climb_rate_m_s << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::AccelerationFrd& lhs, const Telemetry::AccelerationFrd& rhs)
{
    return ((std::isnan(rhs.forward_m_s2) && std::isnan(lhs.forward_m_s2)) ||
            rhs.forward_m_s2 == lhs.forward_m_s2) &&
           ((std::isnan(rhs.right_m_s2) && std::isnan(lhs.right_m_s2)) ||
            rhs.right_m_s2 == lhs.right_m_s2) &&
           ((std::isnan(rhs.down_m_s2) && std::isnan(lhs.down_m_s2)) ||
            rhs.down_m_s2 == lhs.down_m_s2);
}

std::ostream& operator<<(std::ostream& str, Telemetry::AccelerationFrd const& acceleration_frd)
{
    str << std::setprecision(15);
    str << "acceleration_frd:" << '\n' << "{\n";
    str << "    forward_m_s2: " << acceleration_frd.forward_m_s2 << '\n';
    str << "    right_m_s2: " << acceleration_frd.right_m_s2 << '\n';
    str << "    down_m_s2: " << acceleration_frd.down_m_s2 << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::AngularVelocityFrd& lhs, const Telemetry::AngularVelocityFrd& rhs)
{
    return ((std::isnan(rhs.forward_rad_s) && std::isnan(lhs.forward_rad_s)) ||
            rhs.forward_rad_s == lhs.forward_rad_s) &&
           ((std::isnan(rhs.right_rad_s) && std::isnan(lhs.right_rad_s)) ||
            rhs.right_rad_s == lhs.right_rad_s) &&
           ((std::isnan(rhs.down_rad_s) && std::isnan(lhs.down_rad_s)) ||
            rhs.down_rad_s == lhs.down_rad_s);
}

std::ostream&
operator<<(std::ostream& str, Telemetry::AngularVelocityFrd const& angular_velocity_frd)
{
    str << std::setprecision(15);
    str << "angular_velocity_frd:" << '\n' << "{\n";
    str << "    forward_rad_s: " << angular_velocity_frd.forward_rad_s << '\n';
    str << "    right_rad_s: " << angular_velocity_frd.right_rad_s << '\n';
    str << "    down_rad_s: " << angular_velocity_frd.down_rad_s << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::MagneticFieldFrd& lhs, const Telemetry::MagneticFieldFrd& rhs)
{
    return ((std::isnan(rhs.forward_gauss) && std::isnan(lhs.forward_gauss)) ||
            rhs.forward_gauss == lhs.forward_gauss) &&
           ((std::isnan(rhs.right_gauss) && std::isnan(lhs.right_gauss)) ||
            rhs.right_gauss == lhs.right_gauss) &&
           ((std::isnan(rhs.down_gauss) && std::isnan(lhs.down_gauss)) ||
            rhs.down_gauss == lhs.down_gauss);
}

std::ostream& operator<<(std::ostream& str, Telemetry::MagneticFieldFrd const& magnetic_field_frd)
{
    str << std::setprecision(15);
    str << "magnetic_field_frd:" << '\n' << "{\n";
    str << "    forward_gauss: " << magnetic_field_frd.forward_gauss << '\n';
    str << "    right_gauss: " << magnetic_field_frd.right_gauss << '\n';
    str << "    down_gauss: " << magnetic_field_frd.down_gauss << '\n';
    str << '}';
    return str;
}

bool operator==(const Telemetry::Imu& lhs, const Telemetry::Imu& rhs)
{
    return (rhs.acceleration_frd == lhs.acceleration_frd) &&
           (rhs.angular_velocity_frd == lhs.angular_velocity_frd) &&
           (rhs.magnetic_field_frd == lhs.magnetic_field_frd) &&
           ((std::isnan(rhs.temperature_degc) && std::isnan(lhs.temperature_degc)) ||
            rhs.temperature_degc == lhs.temperature_degc);
}

std::ostream& operator<<(std::ostream& str, Telemetry::Imu const& imu)
{
    str << std::setprecision(15);
    str << "imu:" << '\n' << "{\n";
    str << "    acceleration_frd: " << imu.acceleration_frd << '\n';
    str << "    angular_velocity_frd: " << imu.angular_velocity_frd << '\n';
    str << "    magnetic_field_frd: " << imu.magnetic_field_frd << '\n';
    str << "    temperature_degc: " << imu.temperature_degc << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, Telemetry::Result const& result)
{
    switch (result) {
        case Telemetry::Result::Unknown:
            return str << "Unknown";
        case Telemetry::Result::Success:
            return str << "Success";
        case Telemetry::Result::NoSystem:
            return str << "No System";
        case Telemetry::Result::ConnectionError:
            return str << "Connection Error";
        case Telemetry::Result::Busy:
            return str << "Busy";
        case Telemetry::Result::CommandDenied:
            return str << "Command Denied";
        case Telemetry::Result::Timeout:
            return str << "Timeout";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Telemetry::FixType const& fix_type)
{
    switch (fix_type) {
        case Telemetry::FixType::NoGps:
            return str << "No Gps";
        case Telemetry::FixType::NoFix:
            return str << "No Fix";
        case Telemetry::FixType::Fix2D:
            return str << "Fix 2D";
        case Telemetry::FixType::Fix3D:
            return str << "Fix 3D";
        case Telemetry::FixType::FixDgps:
            return str << "Fix Dgps";
        case Telemetry::FixType::RtkFloat:
            return str << "Rtk Float";
        case Telemetry::FixType::RtkFixed:
            return str << "Rtk Fixed";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Telemetry::FlightMode const& flight_mode)
{
    switch (flight_mode) {
        case Telemetry::FlightMode::Unknown:
            return str << "Unknown";
        case Telemetry::FlightMode::Ready:
            return str << "Ready";
        case Telemetry::FlightMode::Takeoff:
            return str << "Takeoff";
        case Telemetry::FlightMode::Hold:
            return str << "Hold";
        case Telemetry::FlightMode::Mission:
            return str << "Mission";
        case Telemetry::FlightMode::ReturnToLaunch:
            return str << "Return To Launch";
        case Telemetry::FlightMode::Land:
            return str << "Land";
        case Telemetry::FlightMode::Offboard:
            return str << "Offboard";
        case Telemetry::FlightMode::FollowMe:
            return str << "Follow Me";
        case Telemetry::FlightMode::Manual:
            return str << "Manual";
        case Telemetry::FlightMode::Altctl:
            return str << "Altctl";
        case Telemetry::FlightMode::Posctl:
            return str << "Posctl";
        case Telemetry::FlightMode::Acro:
            return str << "Acro";
        case Telemetry::FlightMode::Stabilized:
            return str << "Stabilized";
        case Telemetry::FlightMode::Rattitude:
            return str << "Rattitude";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Telemetry::StatusTextType const& status_text_type)
{
    switch (status_text_type) {
        case Telemetry::StatusTextType::Debug:
            return str << "Debug";
        case Telemetry::StatusTextType::Info:
            return str << "Info";
        case Telemetry::StatusTextType::Notice:
            return str << "Notice";
        case Telemetry::StatusTextType::Warning:
            return str << "Warning";
        case Telemetry::StatusTextType::Error:
            return str << "Error";
        case Telemetry::StatusTextType::Critical:
            return str << "Critical";
        case Telemetry::StatusTextType::Alert:
            return str << "Alert";
        case Telemetry::StatusTextType::Emergency:
            return str << "Emergency";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Telemetry::LandedState const& landed_state)
{
    switch (landed_state) {
        case Telemetry::LandedState::Unknown:
            return str << "Unknown";
        case Telemetry::LandedState::OnGround:
            return str << "On Ground";
        case Telemetry::LandedState::InAir:
            return str << "In Air";
        case Telemetry::LandedState::TakingOff:
            return str << "Taking Off";
        case Telemetry::LandedState::Landing:
            return str << "Landing";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk