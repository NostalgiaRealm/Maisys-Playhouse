
/* ==== __break @ 0040f7fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7fd-0040f7fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


