
/* ==== __break @ 1401b87d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87d-1401b87d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


