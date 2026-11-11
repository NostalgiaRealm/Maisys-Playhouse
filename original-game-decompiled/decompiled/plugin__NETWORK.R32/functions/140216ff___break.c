
/* ==== __break @ 140216ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216ff-140216ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


