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
     * List Interface Mutator to insert an ItemType at an index.
     *
     * @pre None.
     * @param itemPosition
     * @param newItem
     * @post newItem stored at the specified index if posible.
     * @return Boolean value returned: true if successful, false if failed.
     */
    virtual bool insert(int itemPosition, const ItemType& newItem) =0;

    /**
     * List Interface Mutator to remove an item from the List Interface.
     *
     * @pre There must be an Item to remove.
     * @param itemPostion
     * @post item will be removed if possible.
     * @return Boolean value returned: true if successful, false if failed.
     */
    virtual bool remove(int itemPostion) =0;

    /**
     * List Interface Accessor that views the item at the specified index.
     *
     * @pre There must be an Item to view at the index.
     * @param itemPostion
     * @post Returns a copy of the item if possible.
     * @return ItemType returned by shallow copy.
     */
    virtual ItemType getEntry(int itemPostion) const =0;

    /**
     * List Interface Mutator that replaces an item at a specified index with a new item.
     *
     * @pre Index must be valid and there must be an item to replace.
     * @param itemPostion
     * @param newItem
     * @post newItem will replace the item at the specified index and the old Item is returned if succesful.
     * @return ItemType returned by shallow copy of replaced item.
     */
    virtual ItemType replace(int itemPostion, const ItemType& newItem) =0;

    /**
     * List Interface Mutator that clears the List of all items
     *
     * @pre None.
     * @post List Interface will be cleared of all items.
     * @return boolean value returned: true if successful, false if failed.
     */
    virtual bool clear() =0;
};


#endif