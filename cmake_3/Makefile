all:
	@mkdir -p build
	@cmake -S . -B ./build -G "Unix Makefiles"
	@cmake --build ./build

execute:
	@./build/app/main

clean:
	@rm -rf build