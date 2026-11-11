
/* ==== __break @ 00489faa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489faa-00489faa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


