#ifndef VALHALLA_BALDR_DATETIME_H_
#define VALHALLA_BALDR_DATETIME_H_

#include <string>
#include <memory>

namespace valhalla {
namespace baldr {
namespace DateTime {

  /**
   * Get the number of days elapsed from the pivot date until
   * inputed date.
   * @param   date_time in the format of 20150516 or 2015-05-06T08:00
   * @return  Returns the number of days.
   */
  uint32_t days_from_pivot_date(const std::string& date_time);

  /**
   * Get the time from the inputed date.
   * date_time is in the format of 2015-05-06T08:00
   * @param   date_time in the format of 2015-05-06T08:00
   * @return  Returns the formated time 8:00 AM.
   */
  std::string time(const std::string& date_time);

  /**
   * Get the date from the inputed date.
   * date_time is in the format of 2015-05-06T08:00
   * @param   date_time in the format of 2015-05-06T08:00
   * @return  Returns the formated date 2015-05-06.
   */
  std::string date(const std::string& date_time);

  /**
   * Get the dow mask.
   * @param   date_time in the format of 20150516 or 2015-05-06T08:00
   * @return  Returns the dow mask.
   */
  uint32_t day_of_week_mask(const std::string& date_time);

  /**
   * Get the number of seconds elapsed from midnight.
   * Hours can be greater than 24.
   * @param   date_time in the format of 01:34:15 or 2015-05-06T08:00
   * @return  Returns the seconds from midnight.
   */
  uint32_t seconds_from_midnight(const std::string& date_time);

  /**
   * Add x seconds to a date_time and return a ISO date_time string.
   * @param   date_time in the format of 01:34:15 or 2015-05-06T08:00
   * @param   seconds to add to the date.
   * @return  Returns ISO formatted string
   */
  std::string get_duration(const std::string& date_time, uint32_t seconds);

}
}
}
#endif  // VALHALLA_BALDR_DATETIME_H_
