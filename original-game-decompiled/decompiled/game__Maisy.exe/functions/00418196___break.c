
/* ==== __break @ 00418196 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418196-00418196
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


