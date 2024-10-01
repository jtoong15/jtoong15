import os

def clear_screen():
    if os.name == 'nt':
        _ = os.system('cls')
    else:
        _ = os.system('clear')

class Node:
    def __init__ (self, data = None, link = None):
        self.data = data
        self.link = link
      
class singly_linked_list():
    def __init__ (self):
        self.head = None

    def insert_at_beginning(self, data):
        node = Node(data, self.head)
        self.head = node
        
    def output(self):
        if self.head is None:
            print("Linked List is Empty!!")
            return
        
        itr = self.head
        sllstr = ""
        while itr:
            sllstr += str(itr.data) + " ---> "
            itr = itr.link
        print(f"{sllstr} NULL")
        
    def insert_at_end(self, data):
        if self.head is None:
            self.head = Node(data, None)
            return
        
        itr = self.head
        while itr.link:
            itr = itr.link
            
        itr.link = Node(data, None)
        
    def insert_at_index(self, data):
        while True:
            try:
                index = int(input(f"Enter the index (0 to {self.number_of_nodes() - 1}) to insert {data}: "))
                if 0 <= index <= self.number_of_nodes():
                    break
                else:
                    print(f"Invalid index. Please enter a number between 0 and {self.number_of_nodes() - 1}.")
            except ValueError:
                print("Please enter a valid integer.")

        if index == 0:
            self.insert_at_beginning(data)
            print()
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                node = Node(data, itr.link)
                itr.link = node
                break
            itr = itr.link
            count += 1
        print()
        print(f"{data} is inserted at index: {index}")

    def number_of_nodes(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.link
            
        return count
       
    def search_singly_linked_list(self, data):
        if self.head is None:
            return

        itr = self.head
        index = 0
        while itr:
            if str(itr.data) == str(data):
                print()
                print(f"Found {data} at index: {index}")
                return
            itr = itr.link
            index += 1
        print()
        print(f"{data} not found in the linked list...")
        return

    def sorting_singly_linked_list(self):
        if self.head is None:
            return

        while self.head.link:
            itr = self.head
            sorting = False
            while itr.link:
                if int(itr.data) > int(itr.link.data):
                    itr.data, itr.link.data = itr.link.data, itr.data
                    sorting = True
                itr = itr.link
            if not sorting:
                break

    def update_singly_link_list(self):
        if self.head is None:
            return

        while True:
            index_input = input(f"Enter the index (0 to {self.number_of_nodes() - 1}) to update, or 'q' to quit: ")
            if index_input.lower() == 'q':
                break

            try:
                index = int(index_input)
                if 0 <= index < self.number_of_nodes():
                    new_data = input(f"Enter new data for index {index}: ")
                    count = 0
                    itr = self.head
                    while itr:
                        if count == index:
                            itr.data = new_data
                            print()
                            print(f"Updated data at index {index} to: {new_data}")
                            break
                        itr = itr.link
                        count += 1
                    self.output()
                    print("Number of Nodes: ", self.number_of_nodes())
                    print()
                else:
                    print(f"Invalid index. Please enter a number between 0 and {self.number_of_nodes() - 1}.")
            except ValueError:
                print("Please enter a valid integer.")

    def delete_at_beginning(self):
        if self.head is None:
            return
        
        self.head = self.head.link
        
    def delete_at_end(self):
        if self.head is None:
            return

        if self.head.link is None:
            self.head = None
            return

        itr = self.head
        while itr.link.link:
            itr = itr.link

        itr.link = None

    def delete_at_index(self):
        if self.head is None:
            return

        while True:
            try:
                index = int(input(f"Enter the index (0 to {self.number_of_nodes() - 1}) to delete: "))
                if 0 <= index < self.number_of_nodes():
                    break
                else:
                    print(f"Invalid index. Please enter a number between 0 and {self.number_of_nodes() - 1}.")
            except ValueError:
                print("Please enter a valid integer.")

        if index == 0:
            self.head = self.head.link
            print()
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                itr.link = itr.link.link
                break
            itr = itr.link
            count += 1
         
def main():
    sll = singly_linked_list()

    print("===================================================")
    print(f"{'TOONG, JUSTINE A.   BSIT  - 2A':^50}")
    print(f"{'CHOSEN LINKED LIST: SINGLY LINKED LIST':^50}")
    print(f"{'DATA STRUCTURES AND ALGORITHMS - MID TERM PROJECT':^50}")
    print("===================================================")
    
    while True:
        print("\n===================================================")
        print(f"{'MAIN MENU':^50}")
        print("===================================================")
        print("1. INSERT")
        print("2. SEARCH")
        print("3. SORT")
        print("4. UPDATE")
        print("5. DELETE")
        print("6. EXIT")
        print("===================================================")
        choice = input("Enter your choice (1-6): ")
        clear_screen()

        if choice == '1':
            print("===================================================")
            print(f"{'INSERT':^50}")
            print("===================================================")

            while True:
                print("===================================================")
                print("1. Insert at beginning")
                print("2. Insert at end")
                print("3. Insert at index")
                print("4. Main Menu")
                print("===================================================")
                sub_choice = input("Enter your choice (1-4): ")
                
                if sub_choice == '1':
                    data = input("Enter data to insert at beginning: ")
                    sll.insert_at_beginning(data)
                    print()
                elif sub_choice == '2':
                    data = input("Enter data to insert at end: ")
                    sll.insert_at_end(data)
                    print()
                elif sub_choice == '3':
                    print()
                    data = input("Enter data to insert: ")
                    sll.insert_at_index(data)
                    print()
                elif sub_choice == '4':
                    clear_screen()
                    break
                else:
                    print("Invalid choice. Please try again.")
                    print()
                
                sll.output()
                print("Number of Nodes: ", sll.number_of_nodes())

        elif choice == '2':
            print("===================================================")
            print(f"{'SEARCH':^50}")
            print("===================================================")
            sll.output()
            print()
            while True:
                data_to_search = input("Enter the data to search for, or 'q' to return to main menu: ")
                if data_to_search.lower() == 'q':
                    break
                print()
                sll.search_singly_linked_list(data_to_search)
                sll.output()
                print("Number of Nodes: ", sll.number_of_nodes())
                print()
            clear_screen()

        elif choice == '3':
            print("===================================================")
            print(f"{'SORT':^50}")
            print("===================================================")

            print("Unsorted List:")
            sll.output()
            print()
            print("Sorted Linked List:")
            sll.sorting_singly_linked_list()
            sll.output()
            print()

        elif choice == '4':
            print("===================================================")
            print(f"{'UPDATE':^50}")
            print("===================================================")
            sll.update_singly_link_list()
            print()

        elif choice == '5':
            print("===================================================")
            print(f"{'DELETE':^50}")
            print("===================================================")

            while True:
                print("===================================================")
                print("1. Delete at beginning")
                print("2. Delete at end")
                print("3. Delete at index")
                print("4. Main Menu")
                print("===================================================")
                sub_choice = input("Enter your choice (1-4): ")

                if sub_choice == '1':
                    sll.delete_at_beginning()
                    print()
                elif sub_choice == '2':
                    sll.delete_at_end()
                    print()
                elif sub_choice == '3':
                    sll.delete_at_index()
                    print()
                elif sub_choice == '4':
                    print()
                    clear_screen()
                    break
                else:
                    print("Invalid choice. Please try again.")
                    print()

                sll.output()
                print("Number of Nodes: ", sll.number_of_nodes())

        elif choice == '6':
            print("Exiting program...Goodbye!!..")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == '__main__':
    main()