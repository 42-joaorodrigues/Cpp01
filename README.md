# C++ Module 01

![42 Badge](https://img.shields.io/badge/42-C++_Module_01-brightgreen)
![C++ Badge](https://img.shields.io/badge/Language-C++-blue)
![Status Badge](https://img.shields.io/badge/Status-Completed-success)

## Project Details

For full project requirements, see the [Subject File](./subject.md).

## What I Learned

Through this C++ module at 42 School, I developed crucial object-oriented programming skills and C++ fundamentals:

- **Memory allocation strategies** - Understanding when to use stack vs heap allocation for optimal performance
- **Object lifecycle management** - Proper constructor/destructor patterns with clear resource cleanup
- **References vs Pointers** - Mastered the differences and appropriate use cases for each approach
- **Class composition** - Building complex objects by composing simpler ones with clear interfaces
- **Pointers to member functions** - Advanced function pointer techniques for flexible, extensible design
- **Switch statement patterns** - Efficient conditional branching and control flow management
- **File I/O in C++** - Stream-based file operations with proper error handling
- **String manipulation** - C++ string class operations without relying on forbidden functions
- **Function overloading** - Creating flexible interfaces with multiple constructor patterns
- **Const correctness** - Proper use of const keywords for safer, more maintainable code

This module established my foundation in C++ programming and object-oriented design principles essential for advanced software development.

## About the Project

C++ Module 01 focuses on memory allocation, pointers to members, references, and switch statements. This module bridges the gap between C and C++, introducing object-oriented concepts while reinforcing proper memory management practices.

The project covers essential C++ concepts including:
- Dynamic memory allocation with new/delete
- Reference semantics and lifetime management
- Class design with composition patterns
- Advanced function pointer techniques
- File processing with C++ streams

## Implementation Details

The module consists of 7 exercises (ex00-ex06) covering progressively complex C++ concepts:

### Exercise 00: BraiiiiiiinnnzzzZ - Memory Allocation Fundamentals

**Key Implementation Features:**
- **Zombie class** with proper constructor/destructor lifecycle
- **Debug output** for creation and destruction tracking
- **Stack vs Heap allocation** demonstration with `newZombie()` and `randomChump()`
- **Colored console output** for enhanced testing visualization

```cpp
class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};
```

**Memory Management Patterns:**
- Heap allocation returns pointer for external scope usage
- Stack allocation for temporary, local scope zombies
- Proper cleanup with descriptive destructor messages

### Exercise 01: Moar brainz! - Array Allocation

**Advanced Memory Management:**
- **Array allocation** with single `new[]` call for efficiency
- **Default constructor** with separate name initialization
- **Setter method** for post-construction configuration
- **Boundary checking** for invalid input parameters

```cpp
Zombie* zombieHorde(int N, std::string name);
void setName(const std::string& name);
```

**Design Decisions:**
- Default constructor enables array allocation
- Separate name setting allows flexible initialization
- Null return for invalid parameters prevents crashes

### Exercise 02: HI THIS IS BRAIN - Reference Semantics

**Pointer vs Reference Demonstration:**
- **Memory address comparison** between variables, pointers, and references
- **Value access patterns** showing identical behavior
- **Reference aliasing** - proving references are just aliases

**Key Learning:**
- References and variables share identical memory addresses
- References provide safer, cleaner syntax than pointers
- No arithmetic operations possible on references

### Exercise 03: Unnecessary violence - Composition Design

**Class Hierarchy:**
```cpp
class Weapon {
private:
    std::string _type;
public:
    const std::string& getType() const;
    void setType(const std::string& type);
};

class HumanA {
private:
    std::string _name;
    Weapon& _weapon;  // Reference - always armed
};

class HumanB {
private:
    std::string _name;
    Weapon* _weapon;  // Pointer - optionally armed
};
```

**Design Patterns:**
- **Reference composition** for mandatory relationships (HumanA)
- **Pointer composition** for optional relationships (HumanB)
- **Const reference returns** for safe data access
- **Constructor initialization lists** for reference members

### Exercise 04: Sed is for losers - File Processing

**File Replacement System:**
```cpp
class Replace {
private:
    std::string _filename;
    std::string _s1, _s2;
    std::string _replaceLine(const std::string& line) const;
public:
    bool process() const;
};
```

**Implementation Features:**
- **Stream-based file I/O** using ifstream/ofstream
- **Line-by-line processing** for memory efficiency
- **Custom string replacement** without std::string::replace
- **Error handling** for file operations and edge cases
- **Class encapsulation** of replacement logic

### Exercise 05: Harl 2.0 - Function Pointers

**Advanced Function Pointer Implementation:**
```cpp
class Harl {
private:
    void debug();
    void info(); 
    void warning();
    void error();
public:
    void complain(std::string level);
};
```

**Technical Approach:**
- **Pointers to member functions** array for efficient dispatch
- **String-to-function mapping** without if/else chains
- **Encapsulated complaint messages** for maintainable code
- **Level-based message categorization** system

### Exercise 06: Harl filter - Switch Statements

**Command-line Filtering System:**
- **Switch statement implementation** for level filtering
- **Fall-through behavior** to display current level and above
- **Command-line argument processing** with validation
- **Executable naming** following project specifications

**Control Flow Design:**
- Switch cases with intentional fall-through
- Default case for invalid inputs
- Clean program termination patterns

## Usage

```bash
# Navigate to any exercise directory
cd CPP_Module_01/ex00

# Compile the project
make

# Run the executable
./zombie

# Clean up
make clean
```

## Key Technical Achievements

- **Zero memory leaks** - Proper pairing of new/delete operations
- **Const correctness** - Appropriate use of const methods and parameters
- **RAII principles** - Resource acquisition in constructors, cleanup in destructors
- **Clean interfaces** - Well-designed public/private member separation
- **Error handling** - Robust input validation and edge case management
- **Code organization** - Clear separation of concerns across multiple files

## Design Philosophy

My implementation emphasizes:

1. **Safety First** - Const correctness and proper memory management
2. **Clear Intent** - Descriptive variable names and logical class structure
3. **Flexibility** - Supporting both mandatory and optional object relationships
4. **Maintainability** - Clean separation of concerns and encapsulation
5. **Performance** - Efficient algorithms and minimal memory allocations

## Advanced Concepts Demonstrated

- **Constructor initialization lists** for reference members
- **Function pointer arrays** for dispatch tables
- **Stream-based I/O** with proper error checking
- **Reference semantics** vs pointer semantics
- **Object composition** patterns
- **Switch statement optimization** with fall-through

---

*This project demonstrates my proficiency in C++ fundamentals, object-oriented design, and modern C++ best practices while maintaining compatibility with the C++98 standard.*

---

## License

This project is licensed under the [MIT License](./LICENSE).
