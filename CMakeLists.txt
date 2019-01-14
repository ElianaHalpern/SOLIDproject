cmake_minimum_required(VERSION 3.13)
project(SOLIDproject)

set(CMAKE_CXX_STANDARD 14)

add_executable(SOLIDproject Server.h MyParallelServer.cpp MyParallelServer.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h CacheManager.h FileCacheManager.cpp FileCacheManager.h Lexer.cpp Lexer.h Solver.h HandleSolver.h Searcher.h Searchable.h MatrixSearchable.h State.h Main.cpp Main.h)