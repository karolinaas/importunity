if (CONFIG_UNITY_TEST)
    zephyr_include_directories(Unity/src)
    zephyr_library_sources(Unity/src/unity.c)
endif()