
/* ==== __break @ 0040f7ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7ff-0040f7ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


