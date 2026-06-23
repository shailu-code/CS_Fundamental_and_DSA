# Topic: Schema vs Instance

* Schema
A schema in DBMS refers to the overall design or blueprint of a database. It describes how the data will be organized, how the relationships between different entities will be maintained and how constraints will be applied

# Key Characteristics
 Acts as a framework for data storage and manipulation.
 Defined during the database design phase.
 Changes to the schema are rare and require careful planning.

# Types of Schema:
*Logical Schema:* Describes the logical structure, such as tables, columns, data types and relationships.
*Physical Schema:* Details how the data is stored physically on hardware (e.g., file paths, indexing).
*View Schema:* Defines how data is presented to end-users, possibly as a subset or a formatted view.

# Advantages                                                        Disadvantages        
Data Consistency and Integrity                                      Rigidity and Inflexibility
Structured Organization of Data                                     High Complexity in Large Systems
Simplifies Data Access                                              Requires Skilled Designers
Supports Data Security and Authorization                            Limited Adaptability to Changing Requirements
Facilitates Database Design and Documentation                       Overhead in Schema Maintenance
Enables Logical and Physical Data Independence                      Dependency on Schema Knowledge

* Instance
It refers to the content in the database in as much as it refers to the structure defined under a particular schema at a given point.

# Key Characteristics
Represents the current state of the database.
Dynamic in nature data can change every second.
Reflects the real usage and transactions happening in the system.

# Advantages                                       
Real-Time Representation of Data
Flexibility in Data Handling
Supports Day-to-Day Operations
Basis for Decision-Making
Multiple Instances Over Time Enable History Tracking