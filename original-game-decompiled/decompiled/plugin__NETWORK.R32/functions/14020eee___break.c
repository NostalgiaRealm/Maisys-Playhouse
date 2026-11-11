
/* ==== __break @ 14020eee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eee-14020eee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


