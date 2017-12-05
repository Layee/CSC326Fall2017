/** Lab 1.
    @file SeqInterface.h */
#ifndef _SEQ_INTERFACE
#define _SEQ_INTERFACE


using namespace std;

template<class ItemType>
class BagInterface
{
public:
	/** Sees whether this sequence is full.
	@return True if the sequence is full, or false if not. */
   virtual bool isFull() const = 0;
   
   /** Sees whether this sequence is empty.
    @return True if the sequence is empty, or false if not. */
   virtual bool isEmpty() const = 0;
   
   /** Gets the current number of entries in the sequence.
   @return The integer number of entries in the sequence. */
   virtual int size() = 0;

   /** Gets the size of the sequence.
   @return The integer capacity of the sequence. */
   virtual int capacity() = 0;

   /** Gets the first entry in the sequence.
   @return A reference to the first entry in the sequence. */
   virtual ItemType& front() = 0;

   /** Gets the last entry in the sequence.
   @return A reference to the last entry in the sequence. */
   virtual ItemType& back() = 0;
         
   /** Appends an entry to the sequence.
    @param anEntry  The entry to be added to the sequence.
    @post  anEntry is appended to the back of the sequence
	 and the count of items in the sequence has increased by 1. */
   virtual void push_back(const ItemType& anEntry) const = 0;

   /** Removes an entry from the sequence.
   @param anEntry  a reference to the entry removed.
   @post  The back entry is removed from the sequence 
   and the count of items in the sequence has decreased by 1. */
   virtual void pop_back(ItemType& anEntry) const = 0;

   /** Gets an entry in the sequence.
   @param i  The position of the the entry in the sequence.
   @return A reference to the entry at pposition i in the sequence. */
   virtual ItemType& at(int i) = 0;

   /** Changes the capacity of the sequence.
   @param newSize  The new size of the sequence.
   @post  The capacity of the sequence is change to newSize. */
   virtual void resize(int newSize) = 0;
   
   /** Inserts an entry in the sequence.
   @param i  The position to insert the entry in the sequence.
   @param anEntry  The entry to be inserted in the sequence.
   @post  anEntry is inserted in the sequence at position i
   and the count of items in the sequence has increased by 1. */
   virtual void insert(int i, const ItemType& anEntry) const = 0;
   
   /** Return the memory cells allocated for the sequence to the free store. */
   virtual ~sequence() const = 0;
}; // end SeqInterface
#endif