
/* ==== __break @ 1401c7de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7de-1401c7de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


