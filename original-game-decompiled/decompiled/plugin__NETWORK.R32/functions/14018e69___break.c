
/* ==== __break @ 14018e69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e69-14018e69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


