
/* ==== __break @ 004378ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378ad-004378ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


