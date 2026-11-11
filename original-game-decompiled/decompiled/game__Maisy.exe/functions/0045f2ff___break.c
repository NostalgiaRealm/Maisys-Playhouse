
/* ==== __break @ 0045f2ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f2ff-0045f2ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


