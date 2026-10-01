
.PHONY: build test
build:
	cmake -S . -B build && cmake --build build -j
test: build
	cd build && ctest --output-on-failure
