
/* ==== __break @ 0044affc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044affc-0044affc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


