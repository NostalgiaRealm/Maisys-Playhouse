
/* ==== __break @ 00418195 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418195-00418195
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


