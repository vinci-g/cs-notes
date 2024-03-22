# Twelve-Factor App Methodology

1. Codebase
    - Multiple apps should not share the same codebase and should be separated into each individual codebase.
2. Dependencies
    - Explicitly declare and isolate dependencies.
    - Different programming languages implement their own way to isolate dependencies. For example, Python uses virtual environments. But for cases that dependencies are supposed to be present in the system and not for the codebase, another way is to use Docker for creating containers that generates a self hosted environment isolated from the host system.
3. Config
4. Backing Services
5. Build, Release, Run
6. Processes
7. Port Binding
8. Concurrency
    - Processes are a first class citizen. Applications should scale out horizontally and not vertically by running multiple instances of the application concurrently.
9. Disposability
10. Dev/Prod Parity
11. Logs
12. Admin Processes