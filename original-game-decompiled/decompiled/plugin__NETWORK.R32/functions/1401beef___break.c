
/* ==== __break @ 1401beef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beef-1401beef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


