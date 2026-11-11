
/* ==== __break @ 004667ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004667ea-004667ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


