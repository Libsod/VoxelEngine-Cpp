#ifndef GRAPHICS_UI_ELEMENTS_COMMONS_HPP_
#define GRAPHICS_UI_ELEMENTS_COMMONS_HPP_

#include <functional>

namespace gui {
    enum class Orientation { vertical, horizontal };
    
    using ontimeout = std::function<void()>;

    struct IntervalEvent {
        ontimeout callback;
        float interval;
        float timer;
        // -1 - infinity, 1 - one time event
        int repeat;
    };
}

#endif // GRAPHICS_UI_ELEMENTS_COMMONS_HPP_
