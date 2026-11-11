
/* ==== __break @ 14018e66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e66-14018e66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


