# ArduinoJson - arduinojson.org
# Copyright Benoit Blanchon 2014-2018
# MIT License

add_executable(MixedConfigurationTests 
	use_double_0.cpp
	use_double_1.cpp
)

target_link_libraries(MixedConfigurationTests catch)
add_test(MixedConfiguration MixedConfigurationTests)
