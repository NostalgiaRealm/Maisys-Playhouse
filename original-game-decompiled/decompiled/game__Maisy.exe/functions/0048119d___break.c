
/* ==== __break @ 0048119d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048119d-0048119d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


