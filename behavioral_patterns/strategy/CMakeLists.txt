set(SOURCE_FILES "main.cpp"
                  "car/car.cpp")

set(HEADER_FILES  "car/car.h"
                  "car/car_fwd.h"
                  "car/corolla.h"
                  "car/camry.h"
                  "car/supra.h"
                  "remaining_driving_distance_algorithm/rdda.h"
                  "remaining_driving_distance_algorithm/rdda_fwd.h"
                  "remaining_driving_distance_algorithm/rdda_v1.h"
                  "remaining_driving_distance_algorithm/rdda_v2.h"
                  "remaining_driving_distance_algorithm/rdda_v3.h")
set(EXECUTABLE_NAME "strategy")

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

