# Déclaration de l'exécutable de test
add_executable(sim_annealing_test sim_annealing_test.cpp)

# Liaison des dépendances (correction de l'espace après PRIVATE)
target_link_libraries(sim_annealing_test PRIVATE 
    GTest::GTest
    simulated_annealed
)

# Enregistrement du test dans CTest
add_test(NAME sim_annealing_test_gtests COMMAND $<TARGET_FILE:sim_annealing_test>)
