/**
 * CSC232 - Data Structures
 * Missouri State University
 * Spring 2019
 *
 * @file ListInterface.h
 * @brief List prototype class template.
 * @authors Scott Kirsch <kirsch000@live.missouristate.edu>
 *
 */

#ifndef CSC232_LISTINTERFACE_
#define CSC232_LISTINTERFACE_

template<typename ItemType>
class ListInterface
{
public:
    /**
     * ListInterface Accessor to view if class object is empty.
     *
     * @pre None.
     * @post The function returns a boolean value indicating if the class object is empty.
     * @return bool  True if class object is empty, false if not.
     */
    virtual bool isEmpty() const =0;

    /**
     * ListInterface Accessor to view the length of the class object.
     *
     * @pre None.
     * @post getLength return the number of items in the class object.
     * @return int value representing the quantity of items in the class object.
     */
    virtual int getLength() const =0;

    /**
     * List Interface Mutator
     *
     * @pre
     * @param itemPosition
     * @param newItem
     * @return
     */
    virtual bool insert(const int& itemPosition, const ItemType& newItem) =0;

    /**
     * List Interface Mutator
     *
     * @pre
     * @param itemPostion
     * @post
     * @return
     */
    virtual bool remove(const int& itemPostion) =0;

    /**
     * List Interface Accessor
     *
     * @pre
     * @param itemPostion
     * @post
     * @return
     */
    virtual ItemType getEntry(const int& itemPostion) const =0;

    /**
     * List Interface Mutator
     *
     * @pre
     * @param itemPostion
     * @param newItem
     * @post
     * @return
     */
    virtual ItemType replace(const int& itemPostion, const ItemType& newItem) =0;

    /**
     * List Interface Mutator
     *
     * @pre
     * @post
     * @return
     */
    virtual bool clear() =0;
};


#endif