
/* ==== __break @ 0048e69d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e69d-0048e69d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


