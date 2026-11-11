
/* ==== __break @ 004667ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004667ed-004667ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


