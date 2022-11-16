#include <emscripten/bind.h>

using namespace emscripten;

double sum(double a, double b) {
    return a + b;
}

std::string exclaim(std::string message) {
    return message + "!";
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("sum", &sum);
    function("exclaim", &exclaim);
}