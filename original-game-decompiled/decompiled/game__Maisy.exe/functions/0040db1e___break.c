
/* ==== __break @ 0040db1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040db1e-0040db1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


