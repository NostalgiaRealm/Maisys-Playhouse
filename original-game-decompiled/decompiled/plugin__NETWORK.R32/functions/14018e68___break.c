
/* ==== __break @ 14018e68 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e68-14018e68
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


