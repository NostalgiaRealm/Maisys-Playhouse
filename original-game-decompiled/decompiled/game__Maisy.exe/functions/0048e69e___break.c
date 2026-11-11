
/* ==== __break @ 0048e69e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e69e-0048e69e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


