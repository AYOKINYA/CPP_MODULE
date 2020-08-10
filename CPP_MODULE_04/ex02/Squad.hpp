#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
			typedef struct      s_list
			{
				ISpaceMarine*   unit;
				struct s_list   *next;
			}                   t_list;

			t_list  *marines;
			int     n_unit;

	public:
			Squad();
			virtual ~Squad();
			Squad(Squad const &copy);
			Squad& operator=(Squad const & squad);
			virtual int getCount() const;
			virtual ISpaceMarine* getUnit(int N) const;
			virtual int push(ISpaceMarine* ispacemarine);
};
