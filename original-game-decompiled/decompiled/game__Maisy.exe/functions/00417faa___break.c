
/* ==== __break @ 00417faa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417faa-00417faa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


