
/* ==== __break @ 14018e6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6d-14018e6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


